#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa83edc56, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x255fa912, __VMLINUX_SYMBOL_STR(rt2800_disable_wpdma) },
	{ 0x32379d65, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x856369ca, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0xff359abd, __VMLINUX_SYMBOL_STR(rt2800_get_txwi_rxwi_size) },
	{ 0x830d6400, __VMLINUX_SYMBOL_STR(rt2x00lib_pretbtt) },
	{ 0x70d31c62, __VMLINUX_SYMBOL_STR(rt2800_wait_wpdma_ready) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x30917f22, __VMLINUX_SYMBOL_STR(rt2800_process_rxwi) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0xcedcfa17, __VMLINUX_SYMBOL_STR(rt2x00queue_for_each_entry) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x8ff4079b, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xe334b34c, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8de33b52, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0x8e6a1845, __VMLINUX_SYMBOL_STR(rt2800_txdone_entry) },
	{ 0xd613ac72, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd18c7b05, __VMLINUX_SYMBOL_STR(rt2800_enable_radio) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2800lib,rt2x00lib,rt2x00mmio";


MODULE_INFO(srcversion, "9DE32B019DA918A5CFFDCD7");
