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
	{ 0xc9e3a573, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x83728dd8, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x2f9a301, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa57d4ba, __VMLINUX_SYMBOL_STR(rt2x00lib_resume) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x6aab122, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x169630f7, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3099aa15, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa6124283, __VMLINUX_SYMBOL_STR(rt2x00lib_dmastart) },
	{ 0x55ad9bd, __VMLINUX_SYMBOL_STR(rt2x00queue_flush_queue) },
	{ 0xd240ba45, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x1080e831, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xcedcfa17, __VMLINUX_SYMBOL_STR(rt2x00queue_for_each_entry) },
	{ 0xe3767487, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa633ed9c, __VMLINUX_SYMBOL_STR(rt2x00queue_start_queue) },
	{ 0xdcf19188, __VMLINUX_SYMBOL_STR(rt2x00lib_remove_dev) },
	{ 0x156ea5ef, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xdf313a91, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xe334b34c, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xac75ea5f, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x8095f544, __VMLINUX_SYMBOL_STR(rt2x00lib_rxdone) },
	{ 0x4c6ba573, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x54985fc, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x83ba5fbb, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x2e23f50f, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xd613ac72, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x78d42e90, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone_noinfo) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x1d32fea2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd096b8ff, __VMLINUX_SYMBOL_STR(rt2x00lib_dmadone) },
	{ 0xe6d4abf2, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x91e0489a, __VMLINUX_SYMBOL_STR(rt2x00lib_probe_dev) },
	{ 0xf7618f54, __VMLINUX_SYMBOL_STR(rt2x00queue_stop_queue) },
	{ 0x96d59a59, __VMLINUX_SYMBOL_STR(rt2x00lib_suspend) },
	{ 0xc9dd3828, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x7f45417c, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "2989EB81FF1808C86430D4F");
