NULL=

SUBDIRS=ui

man_MANS=pcmanfm.1

desktopdir=$(datadir)/applications
desktop_in_files= \
	pcmanfm.desktop.in \
	pcmanfm-desktop-pref.desktop.in \
	$(NULL)
desktop_DATA = $(desktop_in_files:.desktop.in=.desktop)
@INTLTOOL_DESKTOP_RULE@

defconfdir=$(sysconfdir)/xdg/pcmanfm/default
defconf_DATA = \
	pcmanfm.conf \
	$(NULL)

polkitconfdir=$(datadir)/polkit-1/actions
polkitconf_DATA = \
	org.semplice-linux.pkexec.pcmanfm.policy \
	$(NULL)

EXTRA_DIST= \
	$(desktop_in_files) \
	$(desktop_DATA) \
	$(defconf_DATA) \
	$(NULL)
