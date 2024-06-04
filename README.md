# About

This is a copy of open source software used by Samsung for the Gear 2 (Neo) (SM-R380/SM-R381, codename "rinato").

I decided to re-publish this here, as Samsung's open source portal is a massive pain with slow downloads and source for old products being frequently removed.

The archive seems to be a copy of the development machine's sysroot, with the sources under `standard-armv7l/home/abuild/rpmbuild/SRPMS/`. See `license.html`
for licensing information.

The most interesting part are probably the kernel sources, not sure whether Samsung has modified any of the other software.
In order to make it easier to browse, I've extracted the kernel source RPM to `kernel/`.

Some files have been split using `split.sh`, as they were too large for github. Use `merge.sh` to reconstruct them.

Kernel sources for various Exynos3250 watches have been aggregated at https://github.com/casept/linux-exynos3250-common, please use that repository. This is for archival only.
