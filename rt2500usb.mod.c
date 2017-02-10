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
	{ 0x3976b163, __VMLINUX_SYMBOL_STR(param_ops_bool) },
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
	{ 0x6f9f714, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x39064308, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0xc200c83, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x659a53d4, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xa6416a0a, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xef2ed6bf, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xc7c472ce, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x6e9ae032, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x6dd5c9ec, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xa679b669, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xeba47e8e, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0xea7369f5, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0xd1e42253, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x194fc8e5, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x9d91723c, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0xa40075b8, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x7103b090, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x624aee94, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xafd23b86, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0x86264dd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8c87a246, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1aefbfb9, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xee8e29b6, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf8d8686f, __VMLINUX_SYMBOL_STR(rt2x00lib_set_mac_address) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x69098c87, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0xe198b65e, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x6aab122, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe3767487, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3099aa15, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x79b7da03, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x50b343b5, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x156ea5ef, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xbb0adc85, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xdaa87044, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x425b227b, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x585fae22, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00usb";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FAF96CC04A25762A3E27330");
