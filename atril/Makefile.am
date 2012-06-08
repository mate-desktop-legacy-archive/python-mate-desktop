INCLUDES = $(PYTHON_INCLUDES) $(PYGTK_CFLAGS)

defsdir = $(datadir)/pygtk/2.0/defs

defs_DATA = atril.defs

EXTRA_DIST = $(defs_DATA)

common_ldflags = -module -avoid-version

pkgpythondir = $(pyexecdir)/gtk-2.0
pkgpyexecdir = $(pyexecdir)/gtk-2.0

# atril binding

if BUILD_ATRIL
pkgpyexec_LTLIBRARIES = atril.la
endif
atril_la_CFLAGS = $(ATRIL_CFLAGS)
atril_la_LDFLAGS = $(common_ldflags) -export-symbols-regex initatril
atril_la_LIBADD = $(ATRIL_LIBS)
atril_la_SOURCES = atrilmodule.c
nodist_atril_la_SOURCES = atril.c
CLEANFILES = atril.c
EXTRA_DIST += atril.override  
atril.c: atril.defs atril.override

.defs.c:
	(cd $(srcdir) \
	 && $(PYGTK_CODEGEN) \
            --register $(PYGTK_DEFSDIR)/gtk-types.defs \
            --register $(PYGTK_DEFSDIR)/gdk-types.defs \
	    --py_ssize_t-clean \
	    --override $*.override \
	    --prefix py$* $*.defs) > gen-$*.c \
	&& cp gen-$*.c $*.c \
	&& rm -f gen-$*.c

EXTRA_DIST += wscript
