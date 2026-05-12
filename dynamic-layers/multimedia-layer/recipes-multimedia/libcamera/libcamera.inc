EXTRA_OEMESON:append = " -Dipas=rpi/pisp,rpi/vc4"
PACKAGECONFIG = " raspberrypi gst"
CXXFLAGS = " -Wno-unaligned-access "

DEPENDS += "libpisp"

TARGET_CC_ARCH:append = " -fmacro-prefix-map=${RECIPE_SYSROOT}="
TARGET_CXX_ARCH:append = " -fmacro-prefix-map=${RECIPE_SYSROOT}="

SRC_URI = "${LIBCAMERA_SRC};branch=${LIBCAMERA_BRANCH} "
LIBCAMERA_SRC ?= "git://github.com/raspberrypi/libcamera.git;;protocol=https"
LIBCAMERA_BRANCH = "main"
SRCREV = "f0e40f1c50bd0afe65727d6e407d0dcb42666ada"

SRC_URI[sha256sum] = "606aa26338f69ce178f1cbc648b7574aec4b5bbaeb20f4df36ff49010cb8fbbd"
