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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x83728dd8, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x283e0655, __VMLINUX_SYMBOL_STR(rt2x00lib_get_bssidx) },
	{ 0xa1905b93, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x6aab122, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3099aa15, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x19860c6a, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbb0adc85, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe3767487, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf3eb7982, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9898d9b1, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x1f9ce85a, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xee8e29b6, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1aefbfb9, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x3771b461, __VMLINUX_SYMBOL_STR(crc_ccitt) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xd613ac72, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf8d8686f, __VMLINUX_SYMBOL_STR(rt2x00lib_set_mac_address) },
	{ 0x9baf8082, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211,crc-ccitt";


MODULE_INFO(srcversion, "AFCD4EBB3845DA10AD94366");
