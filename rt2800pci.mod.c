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
	{ 0xe7915165, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xbe9419d6, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x2158544f, __VMLINUX_SYMBOL_STR(rt2800_get_survey) },
	{ 0x91256680, __VMLINUX_SYMBOL_STR(rt2800_ampdu_action) },
	{ 0xa87a638c, __VMLINUX_SYMBOL_STR(rt2800_get_tsf) },
	{ 0xd65a82c4, __VMLINUX_SYMBOL_STR(rt2800_conf_tx) },
	{ 0xf0feca81, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_remove) },
	{ 0x5c201c44, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_add) },
	{ 0xc6aff818, __VMLINUX_SYMBOL_STR(rt2800_set_rts_threshold) },
	{ 0x45087a9e, __VMLINUX_SYMBOL_STR(rt2800_get_key_seq) },
	{ 0x8d3f2fef, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x496d28a9, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x7906a662, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x6f9f714, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0xc200c83, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x659a53d4, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xa6416a0a, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xef2ed6bf, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xc7c472ce, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x6e9ae032, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x6dd5c9ec, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xa679b669, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x3b1acabd, __VMLINUX_SYMBOL_STR(rt2800mmio_get_txwi) },
	{ 0xa1c723fe, __VMLINUX_SYMBOL_STR(rt2800mmio_init_registers) },
	{ 0xd1b98fb2, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0x331b16c9, __VMLINUX_SYMBOL_STR(rt2800_sta_remove) },
	{ 0xeeeab08a, __VMLINUX_SYMBOL_STR(rt2800_sta_add) },
	{ 0x856369ca, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0x423537c2, __VMLINUX_SYMBOL_STR(rt2800_config_ant) },
	{ 0x958cf3f1, __VMLINUX_SYMBOL_STR(rt2800_config_erp) },
	{ 0x5d62e673, __VMLINUX_SYMBOL_STR(rt2800_config_intf) },
	{ 0x2a8c9c6a, __VMLINUX_SYMBOL_STR(rt2800_config_filter) },
	{ 0x20abf686, __VMLINUX_SYMBOL_STR(rt2800_config_pairwise_key) },
	{ 0xc8571c12, __VMLINUX_SYMBOL_STR(rt2800_config_shared_key) },
	{ 0x5d09b666, __VMLINUX_SYMBOL_STR(rt2800mmio_fill_rxdone) },
	{ 0xe19f75d2, __VMLINUX_SYMBOL_STR(rt2800_clear_beacon) },
	{ 0x67648881, __VMLINUX_SYMBOL_STR(rt2800_write_beacon) },
	{ 0x294580c5, __VMLINUX_SYMBOL_STR(rt2800_write_tx_data) },
	{ 0xb90d4416, __VMLINUX_SYMBOL_STR(rt2800mmio_write_tx_desc) },
	{ 0x579150a9, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0xa5a4e78a, __VMLINUX_SYMBOL_STR(rt2800mmio_stop_queue) },
	{ 0x808bdcc8, __VMLINUX_SYMBOL_STR(rt2800mmio_kick_queue) },
	{ 0xc70ad727, __VMLINUX_SYMBOL_STR(rt2800mmio_start_queue) },
	{ 0x7ef40c08, __VMLINUX_SYMBOL_STR(rt2800_vco_calibration) },
	{ 0x3fc40754, __VMLINUX_SYMBOL_STR(rt2800_gain_calibration) },
	{ 0xefaf70a3, __VMLINUX_SYMBOL_STR(rt2800_link_tuner) },
	{ 0x1ef5a44a, __VMLINUX_SYMBOL_STR(rt2800_reset_tuner) },
	{ 0xcfc0b7f3, __VMLINUX_SYMBOL_STR(rt2800_link_stats) },
	{ 0x9f5e76f, __VMLINUX_SYMBOL_STR(rt2800_rfkill_poll) },
	{ 0xc8acada0, __VMLINUX_SYMBOL_STR(rt2800mmio_clear_entry) },
	{ 0x33b9264c, __VMLINUX_SYMBOL_STR(rt2800mmio_get_entry_state) },
	{ 0x938779c6, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0x608a0dba, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0x5222c954, __VMLINUX_SYMBOL_STR(rt2800_load_firmware) },
	{ 0x33020413, __VMLINUX_SYMBOL_STR(rt2800_check_firmware) },
	{ 0xb4954a25, __VMLINUX_SYMBOL_STR(rt2800_probe_hw) },
	{ 0xc6a1455e, __VMLINUX_SYMBOL_STR(rt2800mmio_autowake_tasklet) },
	{ 0x92c0bcd1, __VMLINUX_SYMBOL_STR(rt2800mmio_rxdone_tasklet) },
	{ 0x2505789d, __VMLINUX_SYMBOL_STR(rt2800mmio_tbtt_tasklet) },
	{ 0xfad1430, __VMLINUX_SYMBOL_STR(rt2800mmio_pretbtt_tasklet) },
	{ 0xe28f94c7, __VMLINUX_SYMBOL_STR(rt2800mmio_txstatus_tasklet) },
	{ 0x5fa4db64, __VMLINUX_SYMBOL_STR(rt2800mmio_interrupt) },
	{ 0xf6a55d65, __VMLINUX_SYMBOL_STR(rt2800mmio_queue_init) },
	{ 0x22a45897, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0x4266353a, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0x3bc2942c, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0x9b1fff18, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe0813caf, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x227d054c, __VMLINUX_SYMBOL_STR(rt2800mmio_toggle_irq) },
	{ 0x96645646, __VMLINUX_SYMBOL_STR(rt2800mmio_enable_radio) },
	{ 0xdd66b1f0, __VMLINUX_SYMBOL_STR(rt2800_mcu_request) },
	{ 0x3099aa15, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4a619f83, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xab945a16, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x10199d09, __VMLINUX_SYMBOL_STR(rt2800_read_eeprom_efuse) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0x2f30ca87, __VMLINUX_SYMBOL_STR(rt2800_efuse_detect) },
	{ 0x99158a08, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,rt2x00pci,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "09E96BFAF9D1E64637A101E");
