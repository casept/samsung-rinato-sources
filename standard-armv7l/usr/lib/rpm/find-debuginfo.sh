#!/bin/bash
#find-debuginfo.sh - automagically generate debug info and file list
#for inclusion in an rpm spec file.
#
# Usage: find-debuginfo.sh [--strict-build-id] [-g] [-r]
#	 		   [-o debugfiles.list]
#			   [[-l filelist]... [-p 'pattern'] -o debuginfo.list]
#			   [builddir]
#
# The -g flag says to use strip -g instead of full strip on DSOs.
# The --strict-build-id flag says to exit with failure status if
# any ELF binary processed fails to contain a build-id note.
# The -r flag says to use eu-strip --reloc-debug-sections.
#
# A single -o switch before any -l or -p switches simply renames
# the primary output file from debugfiles.list to something else.
# A -o switch that follows a -p switch or some -l switches produces
# an additional output file with the debuginfo for the files in
# the -l filelist file, or whose names match the -p pattern.
# The -p argument is an grep -E -style regexp matching the a file name,
# and must not use anchors (^ or $).
#
# All file names in switches are relative to builddir (. if not given).
#

# With -g arg, pass it to strip on libraries.
strip_g=false

# with -r arg, pass --reloc-debug-sections to eu-strip.
strip_r=false

# Barf on missing build IDs.
strict=false

BUILDDIR=.
out=debugfiles.list
nout=0
while [ $# -gt 0 ]; do
  case "$1" in
  --strict-build-id)
    strict=true
    ;;
  -g)
    strip_g=true
    ;;
  -o)
    if [ -z "${lists[$nout]}" -a -z "${ptns[$nout]}" ]; then
      out=$2
    else
      outs[$nout]=$2
      ((nout++))
    fi
    shift
    ;;
  -l)
    lists[$nout]="${lists[$nout]} $2"
    shift
    ;;
  -p)
    ptns[$nout]=$2
    shift
    ;;
  -r)
    strip_r=true
    ;;
  *)
    BUILDDIR=$1
    shift
    break
    ;;
  esac
  shift
done

i=0
while ((i < nout)); do
  outs[$i]="$BUILDDIR/${outs[$i]}"
  l=''
  for f in ${lists[$i]}; do
    l="$l $BUILDDIR/$f"
  done
  lists[$i]=$l
  ((++i))
done

LISTFILE="$BUILDDIR/$out"
SOURCEFILE="$BUILDDIR/debugsources.list"
LINKSFILE="$BUILDDIR/debuglinks.list"

> "$SOURCEFILE"
> "$LISTFILE"
> "$LINKSFILE"

debugdir="${RPM_BUILD_ROOT}/usr/lib/debug"

strip_to_debug()
{
  local g=
  local r=
  $strip_r && r=--reloc-debug-sections
  $strip_g && case "$(file -bi "$2")" in
  application/x-sharedlib*) g=-g ;;
  esac
  eu-strip --remove-comment $r $g -f "$1" "$2" || exit
  chmod 444 "$1" || exit
}

# Make a relative symlink to $1 called $3$2
shopt -s extglob
link_relative()
{
  local t="$1" f="$2" pfx="$3"
  local fn="${f#/}" tn="${t#/}"
  local fd td d

  while fd="${fn%%/*}"; td="${tn%%/*}"; [ "$fd" = "$td" ]; do
    fn="${fn#*/}"
    tn="${tn#*/}"
  done

  d="${fn%/*}"
  if [ "$d" != "$fn" ]; then
    d="${d//+([!\/])/..}"
    tn="${d}/${tn}"
  fi

  mkdir -p "$(dirname "$pfx$f")" && ln -snf "$tn" "$pfx$f"
}

# Make a symlink in /usr/lib/debug/$2 to $1
debug_link()
{
  local l="/usr/lib/debug$2"
  local t="$1"
  echo >> "$LINKSFILE" "$l $t"
  link_relative "$t" "$l" "$RPM_BUILD_ROOT"
}

# Compare two binaries but ignore the .note.gnu.build-id section
elfcmp()
{
  local tmp1=$(mktemp -t ${1##*/}.XXXXXX)
  local tmp2=$(mktemp -t ${2##*/}.XXXXXX)

  objcopy -R .note.gnu.build-id -R .gnu_debuglink $1 $tmp1
  objcopy -R .note.gnu.build-id -R .gnu_debuglink $2 $tmp2
  cmp -s $tmp1 $tmp2
  local res=$?
  rm -f $tmp1 $tmp2
  return $res
}

# Make a build-id symlink for id $1 with suffix $3 to file $2.
make_id_link()
{
  local id="$1" file="$2"
  local idfile=".build-id/${id:0:2}/${id:2}"
  [ $# -eq 3 ] && idfile="${idfile}$3"
  local root_idfile="$RPM_BUILD_ROOT/usr/lib/debug/$idfile"

  if [ ! -L "$root_idfile" ]; then
    debug_link "$file" "/$idfile"
    return
  fi

  [ $# -eq 3 ] && return 0

  local other=$(readlink -m "$root_idfile")
  other=${other#$RPM_BUILD_ROOT}
  if cmp -s "$root_idfile" "$RPM_BUILD_ROOT$file" ||
     elfcmp "$root_idfile" "$RPM_BUILD_ROOT$file" ; then
    # Two copies.  Maybe one has to be setuid or something.
    echo >&2 "*** WARNING: identical binaries are copied, not linked:"
    echo >&2 "        $file"
    echo >&2 "   and  $other"
  else
    # This is pathological, break the build.
    echo >&2 "*** ERROR: same build ID in nonidentical files!"
    echo >&2 "        $file"
    echo >&2 "   and  $other"
    exit 2
  fi
}

get_debugfn()
{
  dn=$(dirname "${1#$RPM_BUILD_ROOT}")
  bn=$(basename "$1" .debug).debug

  debugdn=${debugdir}${dn}
  debugfn=${debugdn}/${bn}
}

set -o pipefail

strict_error=ERROR
$strict || strict_error=WARNING

# Strip ELF binaries (and no static libraries)
find $RPM_BUILD_ROOT ! -path "${debugdir}/*.debug" -type f \( -perm +111 -or -name "*.so*" -or -name "*.ko" \) ! -name "*.a" -print |
file -N -f - | sed -n -e 's/^\(.*\):[ 	]*.*ELF.*, not stripped/\1/p' |
xargs --no-run-if-empty stat -c '%h %D_%i %n' |
while read nlinks inum f; do
  case $(objdump -h $f 2>/dev/null | egrep -o '(debug[\.a-z_]*|gnu.version)') in
    *debuglink*) continue ;;
    *debug*) ;;
    *gnu.version*)
	echo "WARNING: "`echo $f | sed -e "s,^$RPM_BUILD_ROOT/*,/,"`" has no debug info!"
	;;
    *) ;;
  esac
  get_debugfn "$f"
  [ -f "${debugfn}" ] && continue

  # If this file has multiple links, keep track and make
  # the corresponding .debug files all links to one file too.
  if [ $nlinks -gt 1 ]; then
    eval linked=\$linked_$inum
    if [ -n "$linked" ]; then
      link=$debugfn
      get_debugfn "$linked"
      echo "hard linked $link to $debugfn"
      mkdir -p "$(dirname "$link")" && ln -nf "$debugfn" "$link"
      continue
    else
      eval linked_$inum=\$f
      echo "file $f has $[$nlinks - 1] other hard links"
    fi
  fi

  echo "extracting debug info from $f"
  mode=$(stat -c %a "$f")
  chmod +w "$f"
  id=$($(DEBUGEDIT=$(which debugedit 2>/dev/null); \
      echo ${DEBUGEDIT:-/usr/lib/rpm/debugedit}) -b "$RPM_BUILD_DIR" \
      -d /usr/src/debug -i -l "$SOURCEFILE" "$f") || exit
  if [ -z "$id" ]; then
    echo >&2 "*** ${strict_error}: No build ID note found in $f"
    $strict && exit 2
  fi

  [ -x /usr/bin/gdb-add-index ] && /usr/bin/gdb-add-index "$f" > /dev/null 2>&1

  # A binary already copied into /usr/lib/debug doesn't get stripped,
  # just has its file names collected and adjusted.
  case "$dn" in
  /usr/lib/debug/*)
    [ -z "$id" ] || make_id_link "$id" "$dn/$(basename $f)"
    continue ;;
  esac

  mkdir -p "${debugdn}"
  objcopy --only-keep-debug $f $debugfn || :
  (
    shopt -s extglob
    strip_option="--strip-all"
    case "$f" in
      *.ko)
	strip_option="--strip-debug" ;;
      *$STRIP_KEEP_SYMTAB*)
	if test -n "$STRIP_KEEP_SYMTAB"; then
	  strip_option="--strip-debug"
        fi
        ;;
    esac
    if test "$NO_DEBUGINFO_STRIP_DEBUG" = true ; then
      strip_option=
    fi
    objcopy --add-gnu-debuglink=$debugfn -R .comment -R .GCC.command.line $strip_option $f
    chmod $mode $f
  ) || :

  if [ -n "$id" ]; then
    make_id_link "$id" "$dn/$(basename $f)"
    make_id_link "$id" "/usr/lib/debug$dn/$bn" .debug
  fi
done || exit

# For each symlink whose target has a .debug file,
# make a .debug symlink to that file.
find $RPM_BUILD_ROOT ! -path "${debugdir}/*" -type l -print |
while read f
do
  t=$(readlink -m "$f").debug
  f=${f#$RPM_BUILD_ROOT}
  t=${t#$RPM_BUILD_ROOT}
  if [ -f "$debugdir$t" ]; then
    echo "symlinked /usr/lib/debug$t to /usr/lib/debug${f}.debug"
    debug_link "/usr/lib/debug$t" "${f}.debug"
  fi
done

if [ -s "$SOURCEFILE" ]; then
  mkdir -p "${RPM_BUILD_ROOT}/usr/src/debug"
  LC_ALL=C sort -z -u "$SOURCEFILE" | grep -E -v -z '(<internal>|<built-in>)$' |
  (cd "$RPM_BUILD_DIR"; cpio -pd0mL "${RPM_BUILD_ROOT}/usr/src/debug")
  # stupid cpio creates new directories in mode 0700, fixup
  find "${RPM_BUILD_ROOT}/usr/src/debug" -type d -print0 |
  xargs --no-run-if-empty -0 chmod a+rx
  find "${RPM_BUILD_ROOT}/usr/src/debug" -type f -print0 |
  xargs --no-run-if-empty -0 chmod a+r
fi

if [ -d "${RPM_BUILD_ROOT}/usr/lib" -o -d "${RPM_BUILD_ROOT}/usr/src" ]; then
  ((nout > 0)) ||
  test ! -d "${RPM_BUILD_ROOT}/usr/lib" ||
  (cd "${RPM_BUILD_ROOT}/usr/lib"; test ! -d debug || find debug -type d) |
  sed 's,^,%dir /usr/lib/,' >> "$LISTFILE"

  (cd "${RPM_BUILD_ROOT}/usr"
   test ! -d lib/debug || find lib/debug ! -type d
  ) | sed 's,^,/usr/,' >> "$LISTFILE"
fi

: > "$SOURCEFILE"
if [ -d "${RPM_BUILD_ROOT}/usr/src" ]; then
  (cd "${RPM_BUILD_ROOT}/usr"
   test ! -d src/debug || find src/debug -mindepth 1 -maxdepth 1
  ) | sed 's,^,/usr/,' >> "$SOURCEFILE"
fi

# Append to $1 only the lines from stdin not already in the file.
append_uniq()
{
  grep -F -f "$1" -x -v >> "$1"
}

# Helper to generate list of corresponding .debug files from a file list.
filelist_debugfiles()
{
  local extra="$1"
  shift
  sed 's/^%[a-z0-9_][a-z0-9_]*([^)]*) *//
s/^%[a-z0-9_][a-z0-9_]* *//
/^$/d
'"$extra" "$@"
}

# Write an output debuginfo file list based on given input file lists.
filtered_list()
{
  local out="$1"
  shift
  test $# -gt 0 || return
  grep -F -f <(filelist_debugfiles 's,^.*$,/usr/lib/debug&.debug,' "$@") \
  	-x $LISTFILE >> $out
  sed -n -f <(filelist_debugfiles 's/[\\.*+#]/\\&/g
h
s,^.*$,s# &$##p,p
g
s,^.*$,s# /usr/lib/debug&.debug$##p,p
' "$@") "$LINKSFILE" | append_uniq "$out"
}

# Write an output debuginfo file list based on an grep -E -style regexp.
pattern_list()
{
  local out="$1" ptn="$2"
  test -n "$ptn" || return
  grep -E -x -e "$ptn" "$LISTFILE" >> "$out"
  sed -n -r "\#^$ptn #s/ .*\$//p" "$LINKSFILE" | append_uniq "$out"
}

#
# When given multiple -o switches, split up the output as directed.
#
i=0
while ((i < nout)); do
  > ${outs[$i]}
  filtered_list ${outs[$i]} ${lists[$i]}
  pattern_list ${outs[$i]} "${ptns[$i]}"
  grep -Fvx -f ${outs[$i]} "$LISTFILE" > "${LISTFILE}.new"
  mv "${LISTFILE}.new" "$LISTFILE"
  ((++i))
done
if ((nout > 0)); then
  # Now add the right %dir lines to each output list.
  (cd "${RPM_BUILD_ROOT}"; find usr/lib/debug -type d) |
  sed 's#^.*$#\\@^/&/@{h;s@^.*$@%dir /&@p;g;}#' |
  LC_ALL=C sort -ur > "${LISTFILE}.dirs.sed"
  i=0
  while ((i < nout)); do
    sed -n -f "${LISTFILE}.dirs.sed" "${outs[$i]}" | sort -u > "${outs[$i]}.new"
    cat "${outs[$i]}" >> "${outs[$i]}.new"
    mv -f "${outs[$i]}.new" "${outs[$i]}"
    ((++i))
  done
  sed -n -f "${LISTFILE}.dirs.sed" "${LISTFILE}" | sort -u > "${LISTFILE}.new"
  cat "$LISTFILE" >> "${LISTFILE}.new"
  mv "${LISTFILE}.new" "$LISTFILE"
fi
