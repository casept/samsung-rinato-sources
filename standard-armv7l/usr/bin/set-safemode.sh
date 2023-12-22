#!/bin/sh

check_starter=`/bin/ps aux | /bin/grep starter`
if [ "z$check_starter" != "z" ]; then
        /bin/touch /opt/etc/.safeboot
fi
