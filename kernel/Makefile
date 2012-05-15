#
# This file will be copied to <topdir>/kernel and change the name to Makefile by repo.
# If you don't use repo, please copy this file to <topdir>/kernel folder manually.  
#

hide:=@
log=@echo [$(shell date "+%Y-%m-%d %H:%M:%S")]

MAKE_JOBS?=4
KERNEL_TOOLCHAIN_PREFIX := $(shell pwd)/../prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/arm-eabi-
KERNEL_CONFIG=mmp2_android_defconfig

OUTDIR:=out
TOP_DIR:=$(shell pwd)

MODULES_BUILT=
MODULES_CLEAN=
define add-module
	MODULES_BUILT+=$(1)
	MODULES_CLEAN+=clean_$(1)
endef

export ARCH:=arm
export CROSS_COMPILE:=$(KERNEL_TOOLCHAIN_PREFIX)
export KERNELDIR:=$(shell pwd)/kernel

.PHONY:help
help:
	$(hide)echo "======================================="
	$(hide)echo "= This file wraps the build of kernel, modules and recovery kernel"
	$(hide)echo "= make all: to make both the normal and recovery kernels and all modules. The kernels and modules will be output to 'out' directory."
	$(hide)echo "= make kernel: only make the kernel. Using KERNEL_CONFIG variable to specify the kernel config file to be used. By default it is: $(KERNEL_CONFIG)"
	$(hide)echo "= make module: only make all the modules. The kernel should already be built. Otherwise building modules will fail."
	$(hide)echo "= make recovery: only make the recovery kernel. Using KERNEL_CONFIG variable to specify the kernel config file to be used. By default it is: $(KERNEL_CONFIG)"
	$(hide)echo "= make clean: clean the kernels and modules"
	$(hide)echo "======================================="

all: kernel modules recovery

KERNEL_TGT:=kernel/arch/arm/boot/zImage
.PHONY: kernel clean_kernel
kernel:
	$(log) "making kernel [$(KERNEL_CONFIG)]..."
	$(hide)cd kernel && \
	make $(KERNEL_CONFIG) &&\
	tar zxf ../../vendor/marvell/generic/rdroot/root.tgz && \
        cp ../../vendor/marvell/brownstone/rootdir/rdinit ./root/busybox && \
        chmod 755 ./root/busybox/rdinit && \
	make -j$(MAKE_JOBS)
	rm -rf ./kernel/root
	$(hide)mkdir -p $(OUTDIR)
	$(hide)cp $(KERNEL_TGT) $(OUTDIR)/
	$(log) "kernel [$(KERNEL_CONFIG)] done"

KERNEL_RECOVERY := zImage_recovery
.PHONY: recovery
recovery:
	$(log) "making recovery kernel [$(KERNEL_CONFIG)]..."
	$(hide)cd kernel && \
	make $(KERNEL_CONFIG) &&\
	tar zxf ../../vendor/marvell/generic/rdroot/root.tgz && \
        cp ../../vendor/marvell/brownstone/recovery/rdinit ./root/busybox && \
        chmod 755 ./root/busybox/rdinit && \
	make -j$(MAKE_JOBS)
	rm -rf ./kernel/root
	$(hide)mkdir -p $(OUTDIR)
	$(hide)cp $(KERNEL_TGT) $(OUTDIR)/$(KERNEL_RECOVERY)
	$(log) "recovery kernel [$(KERNEL_CONFIG)] done"

menuconfig:
	$(log) "configuring kernel [$(KERNEL_CONFIG)]..."
	$(hide)cd kernel && \
	cp -f arch/arm/configs/$(KERNEL_CONFIG) .config && \
	make menuconfig && \
	cp -f .config arch/arm/configs/$(KERNEL_CONFIG)
	$(log) "kernel menuconfig [$(KERNEL_CONFIG)] done"

.PHONY:clean_kernel clean_modules
clean_kernel:
	$(hide)cd kernel &&\
	make clean
	$(hide)rm -f $(OUTDIR)/zImage
	$(log) "Kernel cleaned."
	$(hide)rm -f $(OUTDIR)/zImage_recovery
	$(log) "Recovery kernel cleaned."

clean: clean_kernel clean_modules
	$(hide)rm -fr $(OUTDIR)

BMM_SRC:=../vendor/marvell/generic/bmm-lib/drv
.PHONY: bmm clean_bmm
bmm:
	$(log) "make bmm driver..."
	$(hide)cd $(BMM_SRC) &&\
	make -j$(MAKE_JOBS) -f Makefile_Android
	$(hide)mkdir -p $(OUTDIR)/modules/
	$(hide)cp $(BMM_SRC)/bmm.ko $(OUTDIR)/modules
	$(log) "bmm driver done."

clean_bmm:
	$(hide)cd $(BMM_SRC) &&\
	make -f Makefile_Android clean
	$(hide)rm -f $(OUTDIR)/modules/bmm.ko
	$(log) "bmm driver cleaned."

$(eval $(call add-module,bmm) )

SD8787_DRVSRC:=../vendor/marvell/generic/sd8787
.PHONY: sd8787_wifi clean_sd8787_wifi
sd8787_wifi:
	$(log) "making sd8787 wifi driver..."
	$(hide)cd $(SD8787_DRVSRC)/wlan_src && \
	make -j$(MAKE_JOBS) default
	$(hide)mkdir -p $(OUTDIR)/modules/
	$(hide)cp $(SD8787_DRVSRC)/wlan_src/sd8xxx.ko $(OUTDIR)/modules/sd8787.ko
	$(hide)cp $(SD8787_DRVSRC)/wlan_src/mlan.ko $(OUTDIR)/modules/mlan.ko
	$(log) "sd8787 wifi driver done."

clean_sd8787_wifi:
	$(hide)cd $(SD8787_DRVSRC)/wlan_src &&\
	make clean
	rm -f $(OUTDIR)/modules/sd8787.ko
	rm -f $(OUTDIR)/modules/mlan.ko
	$(log) "sd8787 wifi driver cleaned."

$(eval $(call add-module,sd8787_wifi) )

.PHONY: sd8787_bt clean_sd8787_bt
sd8787_bt:
	$(log) "making sd8787 BT driver..."
	$(hide)cd $(SD8787_DRVSRC)/bt_src && \
	make -j$(MAKE_JOBS) default
	$(hide)mkdir -p $(OUTDIR)/modules/
	$(hide)cp $(SD8787_DRVSRC)/bt_src/bt8xxx.ko $(OUTDIR)/modules/bt8787.ko
	$(log) "sd8787 bt driver done."

clean_sd8787_bt:
	$(hide)cd $(SD8787_DRVSRC)/bt_src &&\
	make clean
	$(hide)rm -f $(OUTDIR)/modules/bt8787.ko
	$(log) "sd8787 bt driver cleaned."

$(eval $(call add-module,sd8787_bt) )

GC800_DRVSRC:=../vendor/marvell/generic/graphics/galcore_src
export KERNEL_DIR:=$(KERNELDIR)
.PHONY: gc800 clean_gc800
gc800:
	$(log) "make gc800 driver..."
	$(hide)cd $(GC800_DRVSRC) &&\
	make -j$(MAKE_JOBS) all
	$(hide)mkdir -p $(OUTDIR)/modules/
	$(hide)cp $(GC800_DRVSRC)/hal/driver/galcore.ko $(OUTDIR)/modules
	$(log) "gc800 driver done."

clean_gc800:
	$(hide)cd $(GC800_DRVSRC) &&\
	make clean 
	$(hide)rm -f $(OUTDIR)/modules/galcore.ko
	$(log) "gc800 driver cleaned."

$(eval $(call add-module,gc800) )
#insert any module declaration above

MPDC_DRVSRC:=../vendor/marvell/generic/mpdc/
export PXALINUX:=$(KERNELDIR)
export CPU_TYPE:=PJ4
export SOC_TYPE:=PXA688
.PHONY: mpdc clean_mpdc
mpdc:
	$(log) "make mpdc driver..."
	$(hide)cd $(MPDC_DRVSRC) &&\
	make -C src/driver/ PXALINUX=$(PXALINUX) CROSS_COMPILE=$(CROSS_COMPILE) CPU_TYPE=$(CPU_TYPE) SOC_TYPE=$(SOC_TYPE)
	$(hide)mkdir -p $(OUTDIR)/modules/
	$(hide)cp $(MPDC_DRVSRC)/src/driver/out/mpdc_cm.ko $(OUTDIR)/modules
	$(hide)cp $(MPDC_DRVSRC)/src/driver/out/mpdc_css.ko $(OUTDIR)/modules
	$(hide)cp $(MPDC_DRVSRC)/src/driver/out/mpdc_hs.ko $(OUTDIR)/modules
	$(log) "mpdc driver done."

clean_mpdc:
	$(hide)cd $(MPDC_DRVSRC)/src/driver &&\
	make clean
	$(hide)rm -f $(OUTDIR)/modules/mpdc_cm.ko
	$(hide)rm -f $(OUTDIR)/modules/mpdc_css.ko
	$(hide)rm -f $(OUTDIR)/modules/mpdc_hs.ko
	$(log) "mpdc driver cleaned."

$(eval $(call add-module,mpdc) )

SECURITY_SRC:=../vendor/marvell/generic/security
.PHONY: security clean_security
security:
	$(log) "make security modules driver..."
	$(hide)cd $(SECURITY_SRC) &&\
	make KERNEL_DIR=$(TOP_DIR)/kernel CROSS_COMPILE=$(CROSS_COMPILE)
	$(hide)mkdir -p $(OUTDIR)/modules/
	$(hide)cp $(SECURITY_SRC)/wtm_prim/drv/src/mv_wtm_prim.ko $(OUTDIR)/modules
	$(hide)cp $(SECURITY_SRC)/wtpsp/drv/src/mv_wtm_drv.ko $(OUTDIR)/modules
	$(hide)cp $(SECURITY_SRC)/wtm_lca/drv/src/mv_wtm_lca.ko $(OUTDIR)/modules
	$(log) "security driver done."

clean_security:
	$(hide)cd $(SECURITY_SRC) &&\
	make clean
	$(hide)rm -f $(OUTDIR)/modules/mv_wtm_prim.ko
	$(hide)rm -f $(OUTDIR)/modules/mv_wtm_drv.ko
	$(hide)rm -f $(OUTDIR)/modules/mv_wtm_lca.ko
	$(log) "security driver cleaned."

$(eval $(call add-module,security) )


.PHONY: modules
modules:$(MODULES_BUILT)
	$(hide)$(CROSS_COMPILE)strip --strip-unneeded $(OUTDIR)/modules/*.ko

clean_modules: $(MODULES_CLEAN)

