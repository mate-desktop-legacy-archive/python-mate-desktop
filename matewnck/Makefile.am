INCLUDES = $(PYTHON_INCLUDES) $(PYGTK_CFLAGS)

defsdir = $(datadir)/pygtk/2.0/defs

defs_DATA = matewnck.defs

EXTRA_DIST = $(defs_DATA)

common_ldflags = -module -avoid-version

pkgpythondir = $(pyexecdir)/gtk-2.0
pkgpyexecdir = $(pyexecdir)/gtk-2.0

# matewnck binding

if BUILD_MATEWNCK
pkgpyexec_LTLIBRARIES = matewnck.la
endif
matewnck_la_CFLAGS = $(MATEWNCK_CFLAGS) -DMATEWNCK_I_KNOW_THIS_IS_UNSTABLE
matewnck_la_LDFLAGS = $(common_ldflags) -export-symbols-regex initmatewnck
matewnck_la_LIBADD = $(MATEWNCK_LIBS)
matewnck_la_SOURCES = matewnckmodule.c
nodist_matewnck_la_SOURCES = matewnck.c
CLEANFILES = matewnck.c
EXTRA_DIST += matewnck.override  
matewnck.c: matewnck.defs matewnck.override

.defs.c:
	(cd $(srcdir) \
	 && $(PYGTK_CODEGEN) \
	    --py_ssize_t-clean \
            --register $(PYGTK_DEFSDIR)/gtk-types.defs \
            --register $(PYGTK_DEFSDIR)/gdk-types.defs \
	    --override $*.override \
	    --prefix py$* $*.defs) > gen-$*.c \
	&& cp gen-$*.c $*.c \
	&& rm -f gen-$*.c

EXTRA_DIST += wscript

