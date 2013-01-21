SUBDIRS = consortium


pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = gnome-python-desktop-2.0.pc

## Install the bugbuddy module
pkgpyexecdir = $(pyexecdir)/gtk-2.0


EXTRA_DIST = \
  INSTALL.WAF \
  wscript \
  waf \
  MAINTAINERS \
  COPYING.GPL COPYING.LGPL \
  gnome-python-desktop-2.0.pc.in \
  ltihooks.py

$(srcdir)/ChangeLog:
	-rm -f $(srcdir)/ChangeLog
	$(srcdir)/generate-ChangeLog

dist-hook: dist-hook-local $(srcdir)/ChangeLog

.PHONY : dist-hook-local
