
SUBDIRS=

if BUILD_DOCS
  SUBDIRS += docs
endif

if BUILD_APPLET
  SUBDIRS += mateapplet
endif

if BUILD_MATEWNCK
  SUBDIRS += matewnck
endif

if BUILD_CAJABURN
  SUBDIRS += cajaburn
endif

if BUILD_MARCO
  SUBDIRS += marco
endif

if BUILD_MATEKEYRING
  SUBDIRS += matekeyring
endif

if BUILD_MATEDESKTOP
  SUBDIRS += matedesktop
endif

if BUILD_ATRIL
  SUBDIRS += atril
endif

SUBDIRS +=  tests

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = mate-python-desktop-2.0.pc

## Install the bugbuddy module
pkgpyexecdir = $(pyexecdir)/gtk-2.0
if BUILD_BUGBUDDY
  pkgpyexec_PYTHON = bugbuddy.py
endif


EXTRA_DIST = \
  INSTALL.WAF \
  wscript \
  waf \
  MAINTAINERS \
  COPYING.GPL COPYING.LGPL \
  mate-python-desktop-2.0.pc.in \
  ltihooks.py \
  examples/applet/applet.py \
  examples/applet/MATE_PythonAppletSample.server \
  examples/applet/README \
  examples/cajaburn/blank_disc.py \
  examples/cajaburn/drive_selection.py \
  examples/cajaburn/write_iso.py \
  examples/keyring.py \
  examples/keyring-async.py \
  examples/matewnck_example.py


$(srcdir)/ChangeLog:
	-rm -f $(srcdir)/ChangeLog
	$(srcdir)/generate-ChangeLog

dist-hook: dist-hook-local $(srcdir)/ChangeLog

.PHONY : dist-hook-local
