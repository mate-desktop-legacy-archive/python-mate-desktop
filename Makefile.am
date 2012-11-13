
SUBDIRS=

if BUILD_DOCS
  SUBDIRS += docs
endif

if BUILD_MATEPRINT
  SUBDIRS += mateprint
endif

if BUILD_APPLET
  SUBDIRS += mateapplet
endif

if BUILD_GTKSOURCEVIEW
  SUBDIRS += gtksourceview
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

if BUILD_RSVG
  SUBDIRS += rsvg
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
  examples/gtksourceview/test-widget.py \
  examples/applet/applet.py \
  examples/applet/MATE_PythonAppletSample.server \
  examples/applet/README \
  examples/mateprint/test-print.py \
  examples/mateprint/example_01.py \
  examples/mateprint/example_02.py \
  examples/mateprint/example_03.py \
  examples/mateprint/example_04.py \
  examples/mateprint/example_05.py \
  examples/mateprint/example_06.py \
  examples/mateprint/example_08.py \
  examples/mateprint/example_09.py \
  examples/mateprint/example_10.glade \
  examples/mateprint/example_10.py \
  examples/mateprint/example_11.py \
  examples/mateprint/README \
  examples/mateprint/sample-image.png \
  examples/cajaburn/blank_disc.py \
  examples/cajaburn/drive_selection.py \
  examples/cajaburn/write_iso.py \
  examples/keyring.py \
  examples/keyring-async.py \
  examples/rsvg/rsvg-cairo.py \
  examples/matewnck_example.py


$(srcdir)/ChangeLog:
	-rm -f $(srcdir)/ChangeLog
	$(srcdir)/generate-ChangeLog

dist-hook: dist-hook-local $(srcdir)/ChangeLog

.PHONY : dist-hook-local
