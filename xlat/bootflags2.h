/* Generated by ./xlat/gen.sh from ./xlat/bootflags2.in; do not edit. */

static const struct xlat bootflags2[] = {
#if defined(LINUX_REBOOT_MAGIC2) || (defined(HAVE_DECL_LINUX_REBOOT_MAGIC2) && HAVE_DECL_LINUX_REBOOT_MAGIC2)
	XLAT(LINUX_REBOOT_MAGIC2),
#endif
#if defined(LINUX_REBOOT_MAGIC2A) || (defined(HAVE_DECL_LINUX_REBOOT_MAGIC2A) && HAVE_DECL_LINUX_REBOOT_MAGIC2A)
	XLAT(LINUX_REBOOT_MAGIC2A),
#endif
#if defined(LINUX_REBOOT_MAGIC2B) || (defined(HAVE_DECL_LINUX_REBOOT_MAGIC2B) && HAVE_DECL_LINUX_REBOOT_MAGIC2B)
	XLAT(LINUX_REBOOT_MAGIC2B),
#endif
#if defined(LINUX_REBOOT_MAGIC2C) || (defined(HAVE_DECL_LINUX_REBOOT_MAGIC2C) && HAVE_DECL_LINUX_REBOOT_MAGIC2C)
	XLAT(LINUX_REBOOT_MAGIC2C),
#endif
	XLAT_END
};
