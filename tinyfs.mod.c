#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd235532c, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x97e1f970, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x258b1c5, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x2e99f239, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x46af2b76, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x98fca85f, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0x5ebd4794, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x4dca5a4f, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xa1501aec, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xb1eab091, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xd434cca4, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3F9EFFF0DD493E66241226E");
MODULE_INFO(rhelversion, "7.4");
