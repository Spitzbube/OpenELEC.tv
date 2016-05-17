################################################################################
#      This file is part of OpenELEC - http://www.openelec.tv
#      Copyright (C) 2009-2015 Stephan Raue (stephan@openelec.tv)
#
#  OpenELEC is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 2 of the License, or
#  (at your option) any later version.
#
#  OpenELEC is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with OpenELEC.  If not, see <http://www.gnu.org/licenses/>.
################################################################################

PKG_NAME="hisi3796m-samples"
PKG_VERSION="1.0"
PKG_REV="1"
PKG_ARCH="arm"
PKG_LICENSE="GPL"
PKG_SITE=""
PKG_URL=""
PKG_DEPENDS_TARGET="toolchain linux hi3796m-drivers"
PKG_NEED_UNPACK="$LINUX_DEPENDS"
PKG_PRIORITY="optional"
PKG_SECTION="driver"
PKG_SHORTDESC="Hisilicon sample applications"
PKG_LONGDESC="Hisilicon sample applications"
PKG_IS_ADDON="no"
PKG_AUTORECONF="no"


pre_build_target() {
  mkdir -p $PKG_BUILD
  cp -R $PKG_DIR/* $PKG_BUILD/.
  rm $PKG_BUILD/package.mk
} 

pre_make_target() {
#  export KERNEL_SRC=$(kernel_path)
  export SAMPLE_DIR=$ROOT/$PKG_BUILD
  export SDK_DIR="$(get_build_dir hi3796m-drivers)" 
}

post_make_target() {
  mkdir -p $SYSROOT_PREFIX/usr/lib
    cp -PRv common/libhi_sample_common.a $SYSROOT_PREFIX/usr/lib

  mkdir -p $SYSROOT_PREFIX/usr/include
    cp -PRv common/*.h $SYSROOT_PREFIX/usr/include
} 

makeinstall_target() {
  mkdir -p $INSTALL/sample
  cp $ROOT/$PKG_BUILD/fb/sample_fb $INSTALL/sample/.
  cp $ROOT/$PKG_BUILD/gpu/src/es11/coverflow/coverflow $INSTALL/sample/.
  cp -R $ROOT/$PKG_BUILD/gpu/src/es11/coverflow/coverflow_res $INSTALL/sample/.
}


