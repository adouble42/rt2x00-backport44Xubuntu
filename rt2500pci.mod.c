#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa83edc56, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x64564f42, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0xd2cc8b99, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x5ac909bd, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0xa2ccac05, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0xe7915165, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xbe9419d6, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x19860c6a, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x8d3f2fef, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x496d28a9, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x7906a662, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0xc200c83, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x659a53d4, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xa6416a0a, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xef2ed6bf, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xc7c472ce, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x6e9ae032, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x6dd5c9ec, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xa679b669, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x579150a9, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0x938779c6, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0x608a0dba, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0x22a45897, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0x4266353a, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0x3bc2942c, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0x9b1fff18, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe0813caf, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x8de33b52, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x32379d65, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0x1aefbfb9, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xee8e29b6, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf8d8686f, __VMLINUX_SYMBOL_STR(rt2x00lib_set_mac_address) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0x8ff4079b, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xe334b34c, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0x9898d9b1, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x3099aa15, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc7f4f38a, __VMLINUX_SYMBOL_STR(rt2x00queue_map_txskb) },
	{ 0xab945a16, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6aab122, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd1b98fb2, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0xe3767487, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x99158a08, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AF80133C0221FC445D5B28C");
