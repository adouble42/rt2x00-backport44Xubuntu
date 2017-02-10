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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x178294a6, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa57d4ba, __VMLINUX_SYMBOL_STR(rt2x00lib_resume) },
	{ 0x7963100c, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x1d862861, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x38c995e, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x3099aa15, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd240ba45, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x1ef68480, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0xdcf19188, __VMLINUX_SYMBOL_STR(rt2x00lib_remove_dev) },
	{ 0x484f52ec, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x33e45ca4, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x76f16bbc, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x39251dae, __VMLINUX_SYMBOL_STR(pci_clear_mwi) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8efb463d, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xc77da0df, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x2e23f50f, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x4e77045d, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xb0f60783, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x91e0489a, __VMLINUX_SYMBOL_STR(rt2x00lib_probe_dev) },
	{ 0x96d59a59, __VMLINUX_SYMBOL_STR(rt2x00lib_suspend) },
	{ 0xaf7f9685, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x3d4b791c, __VMLINUX_SYMBOL_STR(pci_save_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "FE33E0FF0A277F007125FA1");
