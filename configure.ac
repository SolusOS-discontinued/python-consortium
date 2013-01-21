-*- mode: autoconf -*-
AC_PREREQ(2.52)

dnl the gnome-python version number
m4_define(gnome_python_desktop_major_version, 2)
m4_define(gnome_python_desktop_minor_version, 32)
m4_define(gnome_python_desktop_micro_version, 0)
m4_define(gnome_python_desktop_version, gnome_python_desktop_major_version.gnome_python_desktop_minor_version.gnome_python_desktop_micro_version)

dnl required versions of other packages
m4_define(pygtk_required_major_version, 2)
m4_define(pygtk_required_minor_version, 10)
m4_define(pygtk_required_micro_version, 3)
m4_define(pygtk_required_version, pygtk_required_major_version.pygtk_required_minor_version.pygtk_required_micro_version)
m4_define(glib_required_version,              2.6.0)
m4_define(gtk_required_version,               2.4.0)
m4_define(consortium_required_version,          1.0)

AC_INIT(gnome-python-desktop, gnome_python_desktop_version,
        [http://bugzilla.gnome.org/enter_bug.cgi?product=gnome-python])
dnl AC_CONFIG_SRCDIR([gnome/uimodule.c])
AM_CONFIG_HEADER(config.h)

AM_INIT_AUTOMAKE
AM_MAINTAINER_MODE

AC_DEFINE(GNOME_PYTHON_DESKTOP_MAJOR_VERSION, gnome_python_desktop_major_version,
                                            [Gnome-Python-Desktop major version])
AC_DEFINE(GNOME_PYTHON_DESKTOP_MINOR_VERSION, gnome_python_desktop_minor_version,
                                            [Gnome-Python-Desktop minor version])
AC_DEFINE(GNOME_PYTHON_DESKTOP_MICRO_VERSION, gnome_python_desktop_micro_version,
                                            [Gnome-Python-Desktop macro version])

dnl AC_ARG_BINDING(NAME, DEFAULT [, MODULENAME])
AC_DEFUN([AC_ARG_BINDING],
[AC_ARG_ENABLE([$1],
             AC_HELP_STRING([--ifelse([$2], [YES], dis, en)able-[$1]],
                            [build ifelse([$3], , [$1], [$3]) bindings (default is [$2])]),
             [if test "$enable_[$1]" = "yes"; then 
	     	build_[$1]=true
	      else
	      	build_[$1]=false
	      fi])
])

GNOME_COMMON_INIT

AC_DISABLE_STATIC
AC_PROG_LIBTOOL
dnl when using libtool 2.x create libtool early, because it's used in configure
m4_ifdef([LT_OUTPUT], [LT_OUTPUT])


dnl check for python
AM_PATH_PYTHON(2.3)
AM_CHECK_PYTHON_HEADERS(,[AC_MSG_ERROR(could not find Python headers)])

dnl check for pygtk
PKG_CHECK_MODULES(PYGTK, pygtk-2.0 >= pygtk_required_version)
AC_SUBST(PYGTK_CFLAGS)
AC_PATH_PROG(PYGTK_CODEGEN, pygtk-codegen-2.0, no)
if test "x$PYGTK_CODEGEN" = xno; then
  AC_MSG_ERROR(could not find pygtk-codegen-2.0 script)
fi

AC_MSG_CHECKING([for conflicting pygtk versions])
pygtk_version=`$PKG_CONFIG --modversion pygtk-2.0`
case $pygtk_version in
     2.9.0|2.9.1)
        AC_MSG_RESULT([found $pygtk_version])
        AC_MSG_ERROR([invalid pygtk version found; please upgrade])
        ;;
     *)
        AC_MSG_RESULT([none])
        ;;
esac

AC_MSG_CHECKING(for pygobject defs)
PYGOBJECT_DEFSDIR=`$PKG_CONFIG --variable=defsdir pygobject-2.0`
AC_SUBST(PYGOBJECT_DEFSDIR)
AC_MSG_RESULT($PYGOBJECT_DEFSDIR)

AC_MSG_CHECKING(for pygtk defs)
PYGTK_DEFSDIR=`$PKG_CONFIG --variable=defsdir pygtk-2.0`
AC_SUBST(PYGTK_DEFSDIR)
AC_MSG_RESULT($PYGTK_DEFSDIR)

AC_MSG_CHECKING(for gnome-python defs)
GNOMEPYTHON_DEFSDIR=`$PKG_CONFIG --variable=defsdir gnome-python-2.0`
AC_SUBST(GNOMEPYTHON_DEFSDIR)
AC_MSG_RESULT($GNOMEPYTHON_DEFSDIR)

AC_MSG_CHECKING(for gnome-python argtypes dir)
GNOME_PYTHON_ARGTYPES_DIR=`$PKG_CONFIG --variable=argtypesdir gnome-python-2.0`
AC_SUBST(GNOME_PYTHON_ARGTYPES_DIR)
AC_MSG_RESULT($GNOME_PYTHON_ARGTYPES_DIR)

dnl get rid of the -export-dynamic stuff from the configure flags ...
export_dynamic=`(./libtool --config; echo eval echo \\$export_dynamic_flag_spec) | sh`

dnl check for glib
AM_PATH_GLIB_2_0(glib_required_version,,[AC_MSG_ERROR(maybe you want the gtk-gnome-1-2 branch?)],$extras_mods)
if test -n "$export_dynamic"; then
  GLIB_LIBS=`echo $GLIB_LIBS | sed -e "s/$export_dynamic//"`
fi

dnl check to make sure we can find gtk
AM_PATH_GTK_2_0(gtk_required_version,,[AC_MSG_ERROR(maybe you want the gtk-gnome-1-2 branch?)],$extras_mods)
if test -n "$export_dynamic"; then
  GTK_LIBS=`echo $GTK_LIBS | sed -e "s/$export_dynamic//"`
fi

PKG_CHECK_MODULES(CONSORTIUM, libconsortium-private >= consortium_required_version,
      build_metacity=true,
      build_metacity=false)

dnl add required cflags ...
JH_ADD_CFLAG([-Wall])
JH_ADD_CFLAG([-std=c9x])
JH_ADD_CFLAG([-fno-strict-aliasing])

AC_CONFIG_FILES(
  Makefile
  consortium/Makefile
)
AC_OUTPUT


echo "*****************************************************************************"
echo "*** WARNING: You are using a deprecated build system (autotools)."
echo "***          You should be using WAF instead; see the file INSTALL.WAF."
echo "***          The autotools build system will be removed in a future version."
echo "*****************************************************************************"
