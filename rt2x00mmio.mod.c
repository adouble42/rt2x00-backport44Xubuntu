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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x3099aa15, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa6124283, __VMLINUX_SYMBOL_STR(rt2x00lib_dmastart) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x96a26b81, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xb9e72aa5, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0x5ed91144, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x8ff4079b, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xe334b34c, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8095f544, __VMLINUX_SYMBOL_STR(rt2x00lib_rxdone) },
	{ 0xd096b8ff, __VMLINUX_SYMBOL_STR(rt2x00lib_dmadone) },
	{ 0xaf7f9685, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib";


MODULE_INFO(srcversion, "3585D48ADA1A66C67399F47");
