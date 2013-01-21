INCLUDES = $(PYTHON_INCLUDES) $(PYGTK_CFLAGS)

defsdir = $(datadir)/pygtk/2.0/defs

defs_DATA = consortium.defs

EXTRA_DIST = $(defs_DATA)

common_ldflags = -module -avoid-version

pkgpythondir = $(pyexecdir)/gtk-2.0
pkgpyexecdir = $(pyexecdir)/gtk-2.0

# consortium binding

pkgpyexec_LTLIBRARIES = consortium.la

consortium_la_CFLAGS = $(CONSORTIUM_CFLAGS)
consortium_la_LDFLAGS = $(common_ldflags) -export-symbols-regex initconsortium
consortium_la_LIBADD = $(CONSORTIUM_LIBS)
consortium_la_SOURCES = consortiummodule.c
nodist_consortium_la_SOURCES = consortium.c
CLEANFILES = consortium.c
EXTRA_DIST += consortium.override  
consortium.c: consortium.defs consortium.override

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
