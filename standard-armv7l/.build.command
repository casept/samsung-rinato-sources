#!/bin/sh -x
exec "rpmbuild" "--define" "_srcdefattr (-,root,root)" "--nosignature" "--target=armv7l-tizen-linux" "-ba" "/home/abuild/rpmbuild/SOURCES/test-pkg.spec"
