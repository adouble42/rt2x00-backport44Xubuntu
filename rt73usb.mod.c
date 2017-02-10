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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1aefbfb9, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xee8e29b6, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf8d8686f, __VMLINUX_SYMBOL_STR(rt2x00lib_set_mac_address) },
	{ 0xd29b009f, __VMLINUX_SYMBOL_STR(crc_itu_t_table) },
	{ 0xf5b4a948, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe198b65e, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x3099aa15, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x50b343b5, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x83728dd8, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0xbb0adc85, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xdaa87044, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf3eb7982, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x69098c87, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x6aab122, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x79b7da03, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x86fef0d5, __VMLINUX_SYMBOL_STR(rt2x00usb_regbusy_read) },
	{ 0xe3767487, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x19860c6a, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x425b227b, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x585fae22, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00usb,crc-itu-t";

MODULE_ALIAS("usb:v07B8pB21Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18C5p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0722d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1723d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1724d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp905Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp905Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631pC019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0119d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0137d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v178Dp02BEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp002Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p3701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1472p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p4600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6874d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA874d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p7318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2573d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2671d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0812p3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6196d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6229d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6238d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p4471d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p90ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p9712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p31F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6933p5001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB50d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7167p3840d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3415d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6A84930B1B8F435846A9D08");
