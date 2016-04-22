################################################################################
#      This file is part of OpenELEC - http://www.openelec.tv
#      Copyright (C) 2009-2014 Stephan Raue (stephan@openelec.tv)
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

PKG_NAME="hi3798-drivers"
PKG_VERSION="spc021"
PKG_REV="1"
PKG_ARCH="any"
PKG_LICENSE="nonfree"
PKG_SITE="http://www.hisilicon.com"
PKG_URL="https://github.com/Spitzbube/hisilicon-kernel/releases/download/linux-hisilicon-3.10-b4e1b4a/$PKG_NAME-$PKG_VERSION.tar.xz"
PKG_DEPENDS_TARGET="toolchain"
PKG_PRIORITY="optional"
PKG_SECTION="graphics"
PKG_SHORTDESC="hi3798-drivers: OpenGL-ES driver for Hi3798"
PKG_LONGDESC="hi3798-drivers: OpenGL-ES driver for Hi3798"

PKG_IS_ADDON="no"
PKG_AUTORECONF="no"

pre_build_target() {
  mkdir -p $PKG_BUILD
  cp $PKG_DIR/base.mak $PKG_BUILD/.
  cp $PKG_DIR/cfg.mak $PKG_BUILD/.
  
  mkdir -p $INSTALL/usr/lib
  cp $PKG_DIR/ha_codec/libHA.AUDIO*.so $INSTALL/usr/lib
} 

make_target() {
  mkdir -p $SYSROOT_PREFIX/usr/include
    cp -PRv include/EGL $SYSROOT_PREFIX/usr/include
    cp -PRv include/GLES $SYSROOT_PREFIX/usr/include
    cp -PRv include/GLES2 $SYSROOT_PREFIX/usr/include
    cp -PRv include/KHR $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_common.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_type.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_debug.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_module.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_common.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_audio.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_audio_codec.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_video.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_avplay.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_vo.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_disp.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_hdmi.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_so.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_sound.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_edid.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_ai.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_demux.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_error_mpi.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_mce.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_ecs.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_frontend.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_i2c.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_gpio.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_ir.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_pmoc.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_keyled.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_wdg.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_otp.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_go_surface.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_go_comm.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_go_errno.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_unf_pdm.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.G711.codec.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.MP2.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.MP3.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.AAC.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.DRA.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.PCM.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.WMA9STD.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.AMRNB.codec.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.AMRWB.codec.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.TRUEHDPASSTHROUGH.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.DOLBYTRUEHD.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.DTSHD.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.DOLBYPLUS.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.AC3PASSTHROUGH.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.DTSM6.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.DTSPASSTHROUGH.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.FFMPEG_DECODE.decode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/HA.AUDIO.AAC.encode.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hifb.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_go.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_go_encoder.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_go_decoder.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_go_bliter.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_go_gdev.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_go_text.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_go_winc.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_go_cursor.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_svr_codec.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_svr_format.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_svr_metadata.h $SYSROOT_PREFIX/usr/include
    cp -PRv include/hi_svr_player.h $SYSROOT_PREFIX/usr/include
    
  mkdir -p $SYSROOT_PREFIX/usr/lib
    cp -PRv lib/share/libMali.so $SYSROOT_PREFIX/usr/lib
    cp -PRv lib/share/libhi_common.so $SYSROOT_PREFIX/usr/lib
    cp -PRv lib/share/libhi_msp.so $SYSROOT_PREFIX/usr/lib
    cp -PRv lib/share/libjpeg6b.so $SYSROOT_PREFIX/usr/lib
#    cp -PRv lib/share/libhigo.so $SYSROOT_PREFIX/usr/lib
#    cp -PRv lib/share/libhigoadp.so $SYSROOT_PREFIX/usr/lib
    cp -PRv lib/static/libhigo.a $SYSROOT_PREFIX/usr/lib
    cp -PRv lib/static/libhigoadp.a $SYSROOT_PREFIX/usr/lib
    cp -PRv lib/share/libplayer.so $SYSROOT_PREFIX/usr/lib
    cp -PRv lib/share/libhi_so.so $SYSROOT_PREFIX/usr/lib
    cp -PRv lib/share/libsubdec.so $SYSROOT_PREFIX/usr/lib
    
    cd $SYSROOT_PREFIX/usr/lib
	ln -sf libMali.so       libEGL.so.1.4
	ln -sf libEGL.so.1.4    libEGL.so.1
	ln -sf libEGL.so.1      libEGL.so
	ln -sf libMali.so       libGLESv1_CM.so.1.1
	ln -sf libGLESv1_CM.so.1.1  libGLESv1_CM.so.1
	ln -sf libGLESv1_CM.so.1    libGLESv1_CM.so
	ln -sf libMali.so           libGLESv2.so.2.0
	ln -sf libGLESv2.so.2.0     libGLESv2.so.2
	ln -sf libGLESv2.so.2       libGLESv2.so
	cd -   
}

makeinstall_target() {
  mkdir -p $INSTALL/lib/modules/$(get_module_dir)/$PKG_NAME
    cp -PRv kmod/* $INSTALL/lib/modules/$(get_module_dir)/$PKG_NAME

  mkdir -p $INSTALL/usr/lib
    cp -PRv lib/share/libMali.so $INSTALL/usr/lib
    cp -PRv lib/share/libhi_common.so $INSTALL/usr/lib
    cp -PRv lib/share/libhi_msp.so $INSTALL/usr/lib
    cp -PRv lib/share/libjpeg6b.so $INSTALL/usr/lib
#    cp -PRv lib/share/libhigo.so $INSTALL/usr/lib
#    cp -PRv lib/share/libhigoadp.so $INSTALL/usr/lib
    cp -PRv lib/extern/libHA.AUDIO*.so $INSTALL/usr/lib
    cp -PRv lib/extern/libHV.VIDEO*.so $INSTALL/usr/lib
    cp -PRv lib/share/libplayer.so $INSTALL/usr/lib
    cp -PRv lib/share/libhi_so.so $INSTALL/usr/lib
    cp -PRv lib/share/libsubdec.so $INSTALL/usr/lib
    cp -PRv lib/extern/libformat.so $INSTALL/usr/lib
    cp -PRv lib/extern/libffmpegformat.so $INSTALL/usr/lib
    cp -PRv lib/extern/libavformat.so.53 $INSTALL/usr/lib
    cp -PRv lib/extern/libavcodec.so.53 $INSTALL/usr/lib
    cp -PRv lib/extern/libavutil.so.51 $INSTALL/usr/lib
    cp -PRv lib/extern/libtlsadp.so $INSTALL/usr/lib
    cp -PRv lib/extern/libssl.so.1.0.0 $INSTALL/usr/lib
    cp -PRv lib/extern/libcrypto.so.1.0.0 $INSTALL/usr/lib
#    cp -PRv lib/extern/libbluray.so.1 $INSTALL/usr/lib
    cp -PRv lib/extern/libswscale.so.2 $INSTALL/usr/lib
    cp -PRv lib/extern/libHiDrmEngine.so $INSTALL/usr/lib
    
    cd $INSTALL/usr/lib
	ln -sf libMali.so       libEGL.so.1.4
	ln -sf libEGL.so.1.4    libEGL.so.1
	ln -sf libEGL.so.1      libEGL.so
	ln -sf libMali.so       libGLESv1_CM.so.1.1
	ln -sf libGLESv1_CM.so.1.1  libGLESv1_CM.so.1
	ln -sf libGLESv1_CM.so.1    libGLESv1_CM.so
	ln -sf libMali.so           libGLESv2.so.2.0
	ln -sf libGLESv2.so.2.0     libGLESv2.so.2
	ln -sf libGLESv2.so.2       libGLESv2.so   
	cd -
}

