android-kernel-at1s0
====================

Kernel source for Toshiba Thrive 7" AT1S0

Based on work by Tybar, JBettcher and pio_masaki.

Git clone this repo, create the kernel directory in your CM10 sources along with the vendor and device sources then build with

. build/envsetup.sh
brunch cm_tostab04-userdebug

Paths should look like:

SOURCE/device/toshiba/tostab04
SOURCE/vendor/toshiba/tostab04
SOURCE/kernel/toshiba/tostab04