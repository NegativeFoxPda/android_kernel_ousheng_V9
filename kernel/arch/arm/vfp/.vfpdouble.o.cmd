cmd_arch/arm/vfp/vfpdouble.o := ../../toolchain/arm-eabi-4.6/bin/arm-eabi-gcc -Wp,-MD,arch/arm/vfp/.vfpdouble.o.d  -nostdinc -isystem /home/niccolo/Development/android/kernel/mt6589/toolchain/arm-eabi-4.6/bin/../lib/gcc/arm-eabi/4.6.x-google/include -I/home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/include/linux/kconfig.h -I//common -I../mediatek/platform/mt6589/kernel/core/include/ -I../mediatek/kernel/include/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/accelerometer/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/core/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/touchpanel/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/camera/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/headset/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/leds/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/alsps/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/imgsensor/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/magnetometer/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/vibrator/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/rtc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/gyroscope/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/battery/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/dct/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/kpd/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/usb/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/flashlight/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/flashlight/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/sound/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/sound/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/ssw/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/ssw/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/accelerometer/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/./ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/jogball/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/hdmi/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/leds/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/alsps/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/cam_cal/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/cam_cal/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/imgsensor/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/lcm/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/lcm/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/magnetometer/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/gyroscope/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/eeprom/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/eeprom/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/barometer/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/ccci/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/lens/ -I../mediatek/custom/out/vanzo89_wet_jb2/kernel/lens/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/hal/camera/ -I../mediatek/custom/out/vanzo89_wet_jb2/hal/sensors/ -I../mediatek/custom/out/vanzo89_wet_jb2/hal/audioflinger/ -I../mediatek/custom/out/vanzo89_wet_jb2/hal/imgsensor/ -I../mediatek/custom/out/vanzo89_wet_jb2/hal/lens/ -I../mediatek/custom/out/vanzo89_wet_jb2/hal/camera/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/hal/inc/ -I../mediatek/custom/out/vanzo89_wet_jb2/common -D__KERNEL__ -mlittle-endian -DMODEM_3G -Imediatek/platform/mt6589/kernel/core/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -fno-pic -marm -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -DMTK_BT_PROFILE_AVRCP -DMTK_GPS_SUPPORT -DMTK_FM_SUPPORT -DMTK_USES_HD_VIDEO -DMTK_AUDIO_ADPCM_SUPPORT -DMTK_BT_PROFILE_MANAGER -DMTK_FM_RECORDING_SUPPORT -DMTK_LCEEFT_SUPPORT -DMTK_BT_PROFILE_PBAP -DMTK_BT_PROFILE_HFP -DMTK_MASS_STORAGE -DMTK_BICR_SUPPORT -DMTK_COMBO_QUICK_SLEEP_SUPPORT -DMTK_THEMEMANAGER_APP -DMTK_HDR_SUPPORT -DMTK_MERGE_INTERFACE_SUPPORT -DHAVE_AACENCODE_FEATURE -DMTK_WIFI_HOTSPOT_SUPPORT -DMTK_COMBO_SUPPORT -DMTK_BT_PROFILE_OPP -DMTK_FLIGHT_MODE_POWER_OFF_MD -DMTK_2SDCARD_SWAP -DMTK_MULTI_STORAGE_SUPPORT -DMTK_ENABLE_VIDEO_EDITOR -DCUSTOM_KERNEL_ACCELEROMETER -DMTK_WFD_SUPPORT -DMTK_WAPI_SUPPORT -DMTK_FD_SUPPORT -DHAVE_ADPCMENCODE_FEATURE -DHAVE_AWBENCODE_FEATURE -DMTK_FACEBEAUTY_SUPPORT -DMTK_BT_SUPPORT -DMTK_BT_40_SUPPORT -DMTK_SPM_MCDI_ENABLE -DMTK_USES_VR_DYNAMIC_QUALITY_MECHANISM -DMTK_HIGH_QUALITY_THUMBNAIL -DMTK_SPH_EHN_CTRL_SUPPORT -DMTK_ENABLE_MD1 -DHAVE_XLOG_FEATURE -DMTK_IPV6_SUPPORT -DMTK_AUTORAMA_SUPPORT -DMTK_EAP_SIM_AKA -DMTK_VOICE_UNLOCK_SUPPORT -DMTK_MATV_ANALOG_SUPPORT -DMTK_BT_PROFILE_A2DP -DMTK_KERNEL_POWER_OFF_CHARGING -DCUSTOM_KERNEL_GYROSCOPE -DCUSTOM_KERNEL_MAGNETOMETER -DMTK_BT_PROFILE_HIDH -DMTK_BT_PROFILE_PAN -DMTK_PRODUCT_INFO_SUPPORT -DMTK_CAMERA_APP_3DHW_SUPPORT -DMTK_WLAN_SUPPORT -DMTK_PQ_SUPPORT -DMTK_TETHERINGIPV6_SUPPORT -DMTK_IPOH_SUPPORT -DMTK_AUTO_DETECT_ACCELEROMETER -DMTK_PLATFORM_OPTIMIZE -DMTK_M4U_SUPPORT -DMTK_BT_PROFILE_SPP -DMTK_BT_30_SUPPORT -DMTK_FAN5405_SUPPORT -DMTK_ION_SUPPORT -DMTK_DHCPV6C_WIFI -DMTK_WEB_NOTIFICATION_SUPPORT -DMTK_CAMERA_BSP_SUPPORT -DMTK_FM_RX_SUPPORT -DMTK_WB_SPEECH_SUPPORT -DCUSTOM_KERNEL_ALSPS -DMTK_VT3G324M_SUPPORT -DMTK_SENSOR_SUPPORT -DMTK_EMMC_SUPPORT -DMTK_BT_21_SUPPORT -DMTK_COMBO_CORE_DUMP_SUPPORT -DPLATFORM_VERSION_V4_2_2 -DVANZO_SUPERUSER_SUPPORT -DVANZO_CAPTURE_5M -DVANZO_CAPTURE_13M -DVANZO_LEDS_SUPPORT -DVANZO_KP_LEDS_SUPPORT -DMTK_AUTO_DETECT_ALSPS -DVANZO_FAN5402_SUPPORT -DMT6589 -DOV8825AF -DDUMMY_LENS -DDUMMY_LENS -DFHD -DNT35596_FHD_DSI_VDO_TRULY -DMODEM_3G -DOV8825_MIPI_RAW -DMTK_MT6628 -DMT6628 -DHI253_YUV -DCONSTANT_FLASHLIGHT -DGC2235_RAW -DDUMMY_LENS -DMTK_AUDIO_BLOUD_CUSTOMPARAMETER_V4 -DOV8825_MIPI_RAW -DGC2235_RAW -DHI253_YUV -DFM_ANALOG_INPUT -DMT6628 -DMTK_GPS_MT6628 -DDUMMY_LENS -DOV8825AF -DFM_ANALOG_OUTPUT -DMT6628_FM -DFHD -DVANZO_ACC_BOTTOM -DVANZO_GY_BOTTOM -DBAT_HAVE_ID -DDCT_V9 -DTMD2771_AUTO -DAP3216C_AUTO -DAMP_AW8145 -DMTK_SIM1_SOCKET_TYPE=\"1\" -DMTK_LCM_PHYSICAL_ROTATION=\"0\" -DLCM_WIDTH=\"1080\" -DMTK_SHARE_MODEM_SUPPORT=\"2\" -DCUSTOM_KERNEL_SSW=\"ssw_generic\" -DMTK_NEON_SUPPORT=\"yes\" -DMTK_SHARE_MODEM_CURRENT=\"2\" -DLCM_HEIGHT=\"1920\" -DMTK_SIM2_SOCKET_TYPE=\"1\" -DVANZO_SUB_CAM_ROTATION=\"0\" -DVANZO_MAIN_CAM_ROTATION=\"0\" -DVANZO_USE_MAIN_CAM=\"nomain\" -Wframe-larger-than=2048 -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(vfpdouble)"  -D"KBUILD_MODNAME=KBUILD_STR(vfp)" -c -o arch/arm/vfp/vfpdouble.o arch/arm/vfp/vfpdouble.c

source_arch/arm/vfp/vfpdouble.o := arch/arm/vfp/vfpdouble.c

deps_arch/arm/vfp/vfpdouble.o := \
  include/linux/kernel.h \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  include/linux/sysinfo.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/posix_types.h \
  include/asm-generic/posix_types.h \
  /home/niccolo/Development/android/kernel/mt6589/toolchain/arm-eabi-4.6/bin/../lib/gcc/arm-eabi/4.6.x-google/include/stdarg.h \
  include/linux/linkage.h \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/linkage.h \
  include/linux/bitops.h \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/preempt/monitor.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/irqflags.h \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/hwcap.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/asm-generic/bitops/le.h \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/swab.h \
  include/linux/byteorder/generic.h \
  include/asm-generic/bitops/ext2-atomic-setbit.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/printk.h \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  include/linux/dynamic_debug.h \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/div64.h \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/compiler.h \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /home/niccolo/Development/android/kernel/mt6589/android_kernel_ousheng_V9_stock/kernel/arch/arm/include/asm/vfp.h \
  arch/arm/vfp/vfpinstr.h \
  arch/arm/vfp/vfp.h \
    $(wildcard include/config/vfpv3.h) \

arch/arm/vfp/vfpdouble.o: $(deps_arch/arm/vfp/vfpdouble.o)

$(deps_arch/arm/vfp/vfpdouble.o):