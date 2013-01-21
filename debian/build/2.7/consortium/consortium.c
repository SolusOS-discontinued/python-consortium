/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#define PY_SSIZE_T_CLEAN
#include <Python.h>




#if PY_VERSION_HEX < 0x02050000
typedef int Py_ssize_t;
#define PY_SSIZE_T_MAX INT_MAX
#define PY_SSIZE_T_MIN INT_MIN
typedef inquiry lenfunc;
typedef intargfunc ssizeargfunc;
typedef intobjargproc ssizeobjargproc;
#endif


#line 4 "consortium.override"
#include <Python.h>

#define NO_IMPORT_PYGOBJECT
#include <pygobject.h>

#include <consortium-private/preview-widget.h>
/* #include <consortium-private/enum-types.h> */
#include <consortium-private/theme-parser.h>

#include "config.h"

GType
meta_theme_get_type(void)
{
    static GType type = 0;

    if (!type)
	type = g_pointer_type_register_static("MetaTheme");
    return type;
}

#define META_TYPE_THEME (meta_theme_get_type())
#line 43 "consortium.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGdkPixbuf_Type;
#define PyGdkPixbuf_Type (*_PyGdkPixbuf_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)
static PyTypeObject *_PyGtkBin_Type;
#define PyGtkBin_Type (*_PyGtkBin_Type)
static PyTypeObject *_PyPangoContext_Type;
#define PyPangoContext_Type (*_PyPangoContext_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyMetaPreview_Type;

#line 62 "consortium.c"



/* ----------- MetaTheme ----------- */

static int
_wrap_meta_theme_new(PyGPointer *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,":Meta.Theme.__init__", kwlist))
        return -1;
    self->gtype = META_TYPE_THEME;
    self->pointer = meta_theme_new();

    if (!self->pointer) {
        PyErr_SetString(PyExc_RuntimeError, "could not create MetaTheme object");
        return -1;
    }
    return 0;
}

static PyObject *
_wrap_meta_theme_free(PyObject *self)
{
    meta_theme_free(pyg_pointer_get(self, MetaTheme));
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_meta_theme_validate(PyObject *self)
{
    int ret;
    GError *error = NULL;

    ret = meta_theme_validate(pyg_pointer_get(self, MetaTheme), &error);
    if (pyg_error_check(&error))
        return NULL;
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_meta_theme_load_image(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "filename", "size_of_theme_icons", NULL };
    char *filename;
    PyObject *py_size_of_theme_icons = NULL;
    GdkPixbuf *ret;
    GError *error = NULL;
    guint size_of_theme_icons = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sO:Meta.Theme.load_image", kwlist, &filename, &py_size_of_theme_icons))
        return NULL;
    if (py_size_of_theme_icons) {
        if (PyLong_Check(py_size_of_theme_icons))
            size_of_theme_icons = PyLong_AsUnsignedLong(py_size_of_theme_icons);
        else if (PyInt_Check(py_size_of_theme_icons))
            size_of_theme_icons = PyInt_AsLong(py_size_of_theme_icons);
        else
            PyErr_SetString(PyExc_TypeError, "Parameter 'size_of_theme_icons' must be an int or a long");
        if (PyErr_Occurred())
            return NULL;
    }
    ret = meta_theme_load_image(pyg_pointer_get(self, MetaTheme), filename, size_of_theme_icons, &error);
    if (pyg_error_check(&error))
        return NULL;
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_meta_theme_get_title_scale(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "type", "flags", NULL };
    int type, flags;
    double ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"ii:Meta.Theme.get_title_scale", kwlist, &type, &flags))
        return NULL;
    ret = meta_theme_get_title_scale(pyg_pointer_get(self, MetaTheme), type, flags);
    return PyFloat_FromDouble(ret);
}

static PyObject *
_wrap_meta_theme_define_int_constant(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "value", NULL };
    char *name;
    int value, ret;
    GError *error = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"si:Meta.Theme.define_int_constant", kwlist, &name, &value))
        return NULL;
    ret = meta_theme_define_int_constant(pyg_pointer_get(self, MetaTheme), name, value, &error);
    if (pyg_error_check(&error))
        return NULL;
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_meta_theme_define_float_constant(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "value", NULL };
    char *name;
    double value;
    int ret;
    GError *error = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sd:Meta.Theme.define_float_constant", kwlist, &name, &value))
        return NULL;
    ret = meta_theme_define_float_constant(pyg_pointer_get(self, MetaTheme), name, value, &error);
    if (pyg_error_check(&error))
        return NULL;
    return PyBool_FromLong(ret);

}

static const PyMethodDef _PyMetaTheme_methods[] = {
    { "free", (PyCFunction)_wrap_meta_theme_free, METH_NOARGS,
      NULL },
    { "validate", (PyCFunction)_wrap_meta_theme_validate, METH_NOARGS,
      NULL },
    { "load_image", (PyCFunction)_wrap_meta_theme_load_image, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_title_scale", (PyCFunction)_wrap_meta_theme_get_title_scale, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "define_int_constant", (PyCFunction)_wrap_meta_theme_define_int_constant, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "define_float_constant", (PyCFunction)_wrap_meta_theme_define_float_constant, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyMetaTheme_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "consortium.Theme",                   /* tp_name */
    sizeof(PyGPointer),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyMetaTheme_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_meta_theme_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- MetaPreview ----------- */

static int
_wrap_meta_preview_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     ":consortium.Preview.__init__",
                                     kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(
            PyExc_RuntimeError, 
            "could not create consortium.Preview object");
        return -1;
    }
    return 0;
}

static PyObject *
_wrap_meta_preview_set_theme(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "theme", NULL };
    PyObject *py_theme;
    MetaTheme *theme = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:Meta.Preview.set_theme", kwlist, &py_theme))
        return NULL;
    if (pyg_pointer_check(py_theme, META_TYPE_THEME))
        theme = pyg_pointer_get(py_theme, MetaTheme);
    else {
        PyErr_SetString(PyExc_TypeError, "theme should be a MetaTheme");
        return NULL;
    }
    
    meta_preview_set_theme(META_PREVIEW(self->obj), theme);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_meta_preview_set_title(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "title", NULL };
    char *title;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:Meta.Preview.set_title", kwlist, &title))
        return NULL;
    
    meta_preview_set_title(META_PREVIEW(self->obj), title);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_meta_preview_set_frame_type(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "type", NULL };
    int type;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:Meta.Preview.set_frame_type", kwlist, &type))
        return NULL;
    
    meta_preview_set_frame_type(META_PREVIEW(self->obj), type);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_meta_preview_set_frame_flags(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "flags", NULL };
    int flags;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:Meta.Preview.set_frame_flags", kwlist, &flags))
        return NULL;
    
    meta_preview_set_frame_flags(META_PREVIEW(self->obj), flags);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyMethodDef _PyMetaPreview_methods[] = {
    { "set_theme", (PyCFunction)_wrap_meta_preview_set_theme, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_title", (PyCFunction)_wrap_meta_preview_set_title, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_frame_type", (PyCFunction)_wrap_meta_preview_set_frame_type, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_frame_flags", (PyCFunction)_wrap_meta_preview_set_frame_flags, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyMetaPreview_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "consortium.Preview",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyMetaPreview_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_meta_preview_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

static PyObject *
_wrap_meta_gradient_create_simple(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "width", "height", "from_", "to", "style", NULL };
    int width, height, style;
    PyObject *py_from, *py_to;
    GdkPixbuf *ret;
    GdkColor *from = NULL, *to = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"iiOOi:gradient_create_simple", kwlist, &width, &height, &py_from, &py_to, &style))
        return NULL;
    if (pyg_boxed_check(py_from, GDK_TYPE_COLOR))
        from = pyg_boxed_get(py_from, GdkColor);
    else {
        PyErr_SetString(PyExc_TypeError, "from should be a GdkColor");
        return NULL;
    }
    if (pyg_boxed_check(py_to, GDK_TYPE_COLOR))
        to = pyg_boxed_get(py_to, GdkColor);
    else {
        PyErr_SetString(PyExc_TypeError, "to should be a GdkColor");
        return NULL;
    }
    
    ret = meta_gradient_create_simple(width, height, from, to, style);
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_meta_gradient_create_multi(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "width", "height", "colors", "n_colors", "style", NULL };
    int width, height, n_colors, style;
    PyObject *py_colors;
    GdkPixbuf *ret;
    GdkColor *colors = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"iiOii:gradient_create_multi", kwlist, &width, &height, &py_colors, &n_colors, &style))
        return NULL;
    if (pyg_boxed_check(py_colors, GDK_TYPE_COLOR))
        colors = pyg_boxed_get(py_colors, GdkColor);
    else {
        PyErr_SetString(PyExc_TypeError, "colors should be a GdkColor");
        return NULL;
    }
    
    ret = meta_gradient_create_multi(width, height, colors, n_colors, style);
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_meta_gradient_add_alpha(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "pixbuf", "alphas", "n_alphas", "type", NULL };
    PyGObject *pixbuf;
    int n_alphas, type;
    guchar *alphas;
    Py_ssize_t alphas_len;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!s#ii:gradient_add_alpha", kwlist, &PyGdkPixbuf_Type, &pixbuf, &alphas, &alphas_len, &n_alphas, &type))
        return NULL;
    
    meta_gradient_add_alpha(GDK_PIXBUF(pixbuf->obj), alphas, n_alphas, type);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_meta_preview_get_icon(PyObject *self)
{
    GdkPixbuf *ret;

    
    ret = meta_preview_get_icon();
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_meta_preview_get_mini_icon(PyObject *self)
{
    GdkPixbuf *ret;

    
    ret = meta_preview_get_mini_icon();
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_meta_theme_get_current(PyObject *self)
{
    MetaTheme *ret;

    
    ret = meta_theme_get_current();
    
    /* pyg_pointer_new handles NULL checking */
    return pyg_pointer_new(META_TYPE_THEME, ret);
}

static PyObject *
_wrap_meta_theme_set_current(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "force_reload", NULL };
    char *name;
    int force_reload;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"si:theme_set_current", kwlist, &name, &force_reload))
        return NULL;
    
    meta_theme_set_current(name, force_reload);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_meta_color_component_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", NULL };
    char *str;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:color_component_from_string", kwlist, &str))
        return NULL;
    
    ret = meta_color_component_from_string(str);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_meta_color_component_to_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "component", NULL };
    int component;
    const gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:color_component_to_string", kwlist, &component))
        return NULL;
    
    ret = meta_color_component_to_string(component);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_meta_button_state_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", NULL };
    char *str;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:button_state_from_string", kwlist, &str))
        return NULL;
    
    ret = meta_button_state_from_string(str);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_meta_button_type_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", "theme", NULL };
    char *str;
    PyObject *py_theme;
    int ret;
    MetaTheme *theme = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sO:button_type_from_string", kwlist, &str, &py_theme))
        return NULL;
    if (pyg_pointer_check(py_theme, META_TYPE_THEME))
        theme = pyg_pointer_get(py_theme, MetaTheme);
    else {
        PyErr_SetString(PyExc_TypeError, "theme should be a MetaTheme");
        return NULL;
    }
    
    ret = meta_button_type_from_string(str, theme);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_meta_frame_piece_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", NULL };
    char *str;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:frame_piece_from_string", kwlist, &str))
        return NULL;
    
    ret = meta_frame_piece_from_string(str);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_meta_frame_state_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", NULL };
    char *str;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:frame_state_from_string", kwlist, &str))
        return NULL;
    
    ret = meta_frame_state_from_string(str);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_meta_frame_resize_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", NULL };
    char *str;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:frame_resize_from_string", kwlist, &str))
        return NULL;
    
    ret = meta_frame_resize_from_string(str);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_meta_frame_focus_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", NULL };
    char *str;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:frame_focus_from_string", kwlist, &str))
        return NULL;
    
    ret = meta_frame_focus_from_string(str);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_meta_frame_type_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", NULL };
    char *str;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:frame_type_from_string", kwlist, &str))
        return NULL;
    
    ret = meta_frame_type_from_string(str);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_meta_gradient_type_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", NULL };
    char *str;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:gradient_type_from_string", kwlist, &str))
        return NULL;
    
    ret = meta_gradient_type_from_string(str);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_meta_gtk_state_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", NULL };
    char *str;
    gint ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:gtk_state_from_string", kwlist, &str))
        return NULL;
    
    ret = meta_gtk_state_from_string(str);
    
    return pyg_enum_from_gtype(GTK_TYPE_STATE_TYPE, ret);
}

static PyObject *
_wrap_meta_gtk_state_to_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "state", NULL };
    PyObject *py_state = NULL;
    const gchar *ret;
    GtkStateType state;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:gtk_state_to_string", kwlist, &py_state))
        return NULL;
    if (pyg_enum_get_value(GTK_TYPE_STATE_TYPE, py_state, (gpointer)&state))
        return NULL;
    
    ret = meta_gtk_state_to_string(state);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_meta_gtk_shadow_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", NULL };
    char *str;
    gint ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:gtk_shadow_from_string", kwlist, &str))
        return NULL;
    
    ret = meta_gtk_shadow_from_string(str);
    
    return pyg_enum_from_gtype(GTK_TYPE_SHADOW_TYPE, ret);
}

static PyObject *
_wrap_meta_gtk_shadow_to_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "shadow", NULL };
    PyObject *py_shadow = NULL;
    GtkShadowType shadow;
    const gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:gtk_shadow_to_string", kwlist, &py_shadow))
        return NULL;
    if (pyg_enum_get_value(GTK_TYPE_SHADOW_TYPE, py_shadow, (gpointer)&shadow))
        return NULL;
    
    ret = meta_gtk_shadow_to_string(shadow);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_meta_gtk_arrow_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", NULL };
    char *str;
    gint ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:gtk_arrow_from_string", kwlist, &str))
        return NULL;
    
    ret = meta_gtk_arrow_from_string(str);
    
    return pyg_enum_from_gtype(GTK_TYPE_ARROW_TYPE, ret);
}

static PyObject *
_wrap_meta_gtk_arrow_to_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "arrow", NULL };
    PyObject *py_arrow = NULL;
    const gchar *ret;
    GtkArrowType arrow;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:gtk_arrow_to_string", kwlist, &py_arrow))
        return NULL;
    if (pyg_enum_get_value(GTK_TYPE_ARROW_TYPE, py_arrow, (gpointer)&arrow))
        return NULL;
    
    ret = meta_gtk_arrow_to_string(arrow);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_meta_image_fill_type_from_string(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "str", NULL };
    char *str;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:image_fill_type_from_string", kwlist, &str))
        return NULL;
    
    ret = meta_image_fill_type_from_string(str);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_meta_theme_load(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "theme_name", NULL };
    char *theme_name;
    GError *err = NULL;
    MetaTheme *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:theme_load", kwlist, &theme_name))
        return NULL;
    
    ret = meta_theme_load(theme_name, &err);
    
    if (pyg_error_check(&err))
        return NULL;
    /* pyg_pointer_new handles NULL checking */
    return pyg_pointer_new(META_TYPE_THEME, ret);
}

const PyMethodDef pyconsortium_functions[] = {
    { "gradient_create_simple", (PyCFunction)_wrap_meta_gradient_create_simple, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gradient_create_multi", (PyCFunction)_wrap_meta_gradient_create_multi, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gradient_add_alpha", (PyCFunction)_wrap_meta_gradient_add_alpha, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "preview_get_icon", (PyCFunction)_wrap_meta_preview_get_icon, METH_NOARGS,
      NULL },
    { "preview_get_mini_icon", (PyCFunction)_wrap_meta_preview_get_mini_icon, METH_NOARGS,
      NULL },
    { "theme_get_current", (PyCFunction)_wrap_meta_theme_get_current, METH_NOARGS,
      NULL },
    { "theme_set_current", (PyCFunction)_wrap_meta_theme_set_current, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "color_component_from_string", (PyCFunction)_wrap_meta_color_component_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "color_component_to_string", (PyCFunction)_wrap_meta_color_component_to_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "button_state_from_string", (PyCFunction)_wrap_meta_button_state_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "button_type_from_string", (PyCFunction)_wrap_meta_button_type_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "frame_piece_from_string", (PyCFunction)_wrap_meta_frame_piece_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "frame_state_from_string", (PyCFunction)_wrap_meta_frame_state_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "frame_resize_from_string", (PyCFunction)_wrap_meta_frame_resize_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "frame_focus_from_string", (PyCFunction)_wrap_meta_frame_focus_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "frame_type_from_string", (PyCFunction)_wrap_meta_frame_type_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gradient_type_from_string", (PyCFunction)_wrap_meta_gradient_type_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_state_from_string", (PyCFunction)_wrap_meta_gtk_state_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_state_to_string", (PyCFunction)_wrap_meta_gtk_state_to_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_shadow_from_string", (PyCFunction)_wrap_meta_gtk_shadow_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_shadow_to_string", (PyCFunction)_wrap_meta_gtk_shadow_to_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_arrow_from_string", (PyCFunction)_wrap_meta_gtk_arrow_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_arrow_to_string", (PyCFunction)_wrap_meta_gtk_arrow_to_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "image_fill_type_from_string", (PyCFunction)_wrap_meta_image_fill_type_from_string, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "theme_load", (PyCFunction)_wrap_meta_theme_load, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};


/* ----------- enums and flags ----------- */

void
pyconsortium_add_constants(PyObject *module, const gchar *strip_prefix)
{
#ifdef VERSION
    PyModule_AddStringConstant(module, "__version__", VERSION);
#endif
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_ALLOWS_DELETE", strip_prefix), META_FRAME_ALLOWS_DELETE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_ALLOWS_MENU", strip_prefix), META_FRAME_ALLOWS_MENU);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_ALLOWS_MINIMIZE", strip_prefix), META_FRAME_ALLOWS_MINIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_ALLOWS_MAXIMIZE", strip_prefix), META_FRAME_ALLOWS_MAXIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_ALLOWS_VERTICAL_RESIZE", strip_prefix), META_FRAME_ALLOWS_VERTICAL_RESIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_ALLOWS_HORIZONTAL_RESIZE", strip_prefix), META_FRAME_ALLOWS_HORIZONTAL_RESIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_HAS_FOCUS", strip_prefix), META_FRAME_HAS_FOCUS);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_SHADED", strip_prefix), META_FRAME_SHADED);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_STUCK", strip_prefix), META_FRAME_STUCK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_MAXIMIZED", strip_prefix), META_FRAME_MAXIMIZED);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_ALLOWS_SHADE", strip_prefix), META_FRAME_ALLOWS_SHADE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_ALLOWS_MOVE", strip_prefix), META_FRAME_ALLOWS_MOVE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_FULLSCREEN", strip_prefix), META_FRAME_FULLSCREEN);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_IS_FLASHING", strip_prefix), META_FRAME_IS_FLASHING);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_DELETE", strip_prefix), META_MENU_OP_DELETE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_MINIMIZE", strip_prefix), META_MENU_OP_MINIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_UNMAXIMIZE", strip_prefix), META_MENU_OP_UNMAXIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_MAXIMIZE", strip_prefix), META_MENU_OP_MAXIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_UNSHADE", strip_prefix), META_MENU_OP_UNSHADE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_SHADE", strip_prefix), META_MENU_OP_SHADE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_UNSTICK", strip_prefix), META_MENU_OP_UNSTICK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_STICK", strip_prefix), META_MENU_OP_STICK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_WORKSPACES", strip_prefix), META_MENU_OP_WORKSPACES);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_MOVE", strip_prefix), META_MENU_OP_MOVE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_RESIZE", strip_prefix), META_MENU_OP_RESIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_ABOVE", strip_prefix), META_MENU_OP_ABOVE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_MOVE_LEFT", strip_prefix), META_MENU_OP_MOVE_LEFT);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_MOVE_RIGHT", strip_prefix), META_MENU_OP_MOVE_RIGHT);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_MOVE_UP", strip_prefix), META_MENU_OP_MOVE_UP);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_MOVE_DOWN", strip_prefix), META_MENU_OP_MOVE_DOWN);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_OP_RECOVER", strip_prefix), META_MENU_OP_RECOVER);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_NONE", strip_prefix), META_GRAB_OP_NONE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_MOVING", strip_prefix), META_GRAB_OP_MOVING);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_RESIZING_SE", strip_prefix), META_GRAB_OP_RESIZING_SE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_RESIZING_S", strip_prefix), META_GRAB_OP_RESIZING_S);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_RESIZING_SW", strip_prefix), META_GRAB_OP_RESIZING_SW);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_RESIZING_N", strip_prefix), META_GRAB_OP_RESIZING_N);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_RESIZING_NE", strip_prefix), META_GRAB_OP_RESIZING_NE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_RESIZING_NW", strip_prefix), META_GRAB_OP_RESIZING_NW);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_RESIZING_W", strip_prefix), META_GRAB_OP_RESIZING_W);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_RESIZING_E", strip_prefix), META_GRAB_OP_RESIZING_E);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_MOVING", strip_prefix), META_GRAB_OP_KEYBOARD_MOVING);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_RESIZING_UNKNOWN", strip_prefix), META_GRAB_OP_KEYBOARD_RESIZING_UNKNOWN);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_RESIZING_S", strip_prefix), META_GRAB_OP_KEYBOARD_RESIZING_S);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_RESIZING_N", strip_prefix), META_GRAB_OP_KEYBOARD_RESIZING_N);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_RESIZING_W", strip_prefix), META_GRAB_OP_KEYBOARD_RESIZING_W);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_RESIZING_E", strip_prefix), META_GRAB_OP_KEYBOARD_RESIZING_E);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_RESIZING_SE", strip_prefix), META_GRAB_OP_KEYBOARD_RESIZING_SE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_RESIZING_NE", strip_prefix), META_GRAB_OP_KEYBOARD_RESIZING_NE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_RESIZING_SW", strip_prefix), META_GRAB_OP_KEYBOARD_RESIZING_SW);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_RESIZING_NW", strip_prefix), META_GRAB_OP_KEYBOARD_RESIZING_NW);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_TABBING_NORMAL", strip_prefix), META_GRAB_OP_KEYBOARD_TABBING_NORMAL);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_TABBING_DOCK", strip_prefix), META_GRAB_OP_KEYBOARD_TABBING_DOCK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_ESCAPING_NORMAL", strip_prefix), META_GRAB_OP_KEYBOARD_ESCAPING_NORMAL);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_ESCAPING_DOCK", strip_prefix), META_GRAB_OP_KEYBOARD_ESCAPING_DOCK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_KEYBOARD_WORKSPACE_SWITCHING", strip_prefix), META_GRAB_OP_KEYBOARD_WORKSPACE_SWITCHING);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_CLICKING_MINIMIZE", strip_prefix), META_GRAB_OP_CLICKING_MINIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_CLICKING_MAXIMIZE", strip_prefix), META_GRAB_OP_CLICKING_MAXIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_CLICKING_UNMAXIMIZE", strip_prefix), META_GRAB_OP_CLICKING_UNMAXIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_CLICKING_DELETE", strip_prefix), META_GRAB_OP_CLICKING_DELETE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRAB_OP_CLICKING_MENU", strip_prefix), META_GRAB_OP_CLICKING_MENU);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_CURSOR_DEFAULT", strip_prefix), META_CURSOR_DEFAULT);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_CURSOR_NORTH_RESIZE", strip_prefix), META_CURSOR_NORTH_RESIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_CURSOR_SOUTH_RESIZE", strip_prefix), META_CURSOR_SOUTH_RESIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_CURSOR_WEST_RESIZE", strip_prefix), META_CURSOR_WEST_RESIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_CURSOR_EAST_RESIZE", strip_prefix), META_CURSOR_EAST_RESIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_CURSOR_SE_RESIZE", strip_prefix), META_CURSOR_SE_RESIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_CURSOR_SW_RESIZE", strip_prefix), META_CURSOR_SW_RESIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_CURSOR_NE_RESIZE", strip_prefix), META_CURSOR_NE_RESIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_CURSOR_NW_RESIZE", strip_prefix), META_CURSOR_NW_RESIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_CURSOR_MOVE_OR_RESIZE_WINDOW", strip_prefix), META_CURSOR_MOVE_OR_RESIZE_WINDOW);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_CURSOR_BUSY", strip_prefix), META_CURSOR_BUSY);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_TYPE_NORMAL", strip_prefix), META_FRAME_TYPE_NORMAL);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_TYPE_DIALOG", strip_prefix), META_FRAME_TYPE_DIALOG);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_TYPE_MODAL_DIALOG", strip_prefix), META_FRAME_TYPE_MODAL_DIALOG);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_TYPE_UTILITY", strip_prefix), META_FRAME_TYPE_UTILITY);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_TYPE_MENU", strip_prefix), META_FRAME_TYPE_MENU);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_TYPE_BORDER", strip_prefix), META_FRAME_TYPE_BORDER);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_TYPE_LAST", strip_prefix), META_FRAME_TYPE_LAST);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_VIRTUAL_SHIFT_MASK", strip_prefix), META_VIRTUAL_SHIFT_MASK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_VIRTUAL_CONTROL_MASK", strip_prefix), META_VIRTUAL_CONTROL_MASK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_VIRTUAL_ALT_MASK", strip_prefix), META_VIRTUAL_ALT_MASK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_VIRTUAL_META_MASK", strip_prefix), META_VIRTUAL_META_MASK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_VIRTUAL_SUPER_MASK", strip_prefix), META_VIRTUAL_SUPER_MASK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_VIRTUAL_HYPER_MASK", strip_prefix), META_VIRTUAL_HYPER_MASK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_VIRTUAL_MOD2_MASK", strip_prefix), META_VIRTUAL_MOD2_MASK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_VIRTUAL_MOD3_MASK", strip_prefix), META_VIRTUAL_MOD3_MASK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_VIRTUAL_MOD4_MASK", strip_prefix), META_VIRTUAL_MOD4_MASK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_VIRTUAL_MOD5_MASK", strip_prefix), META_VIRTUAL_MOD5_MASK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DIRECTION_LEFT", strip_prefix), META_DIRECTION_LEFT);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DIRECTION_RIGHT", strip_prefix), META_DIRECTION_RIGHT);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DIRECTION_TOP", strip_prefix), META_DIRECTION_TOP);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DIRECTION_BOTTOM", strip_prefix), META_DIRECTION_BOTTOM);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DIRECTION_UP", strip_prefix), META_DIRECTION_UP);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DIRECTION_DOWN", strip_prefix), META_DIRECTION_DOWN);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_FUNCTION_MENU", strip_prefix), META_BUTTON_FUNCTION_MENU);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_FUNCTION_MINIMIZE", strip_prefix), META_BUTTON_FUNCTION_MINIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_FUNCTION_MAXIMIZE", strip_prefix), META_BUTTON_FUNCTION_MAXIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_FUNCTION_CLOSE", strip_prefix), META_BUTTON_FUNCTION_CLOSE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_FUNCTION_LAST", strip_prefix), META_BUTTON_FUNCTION_LAST);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRADIENT_VERTICAL", strip_prefix), META_GRADIENT_VERTICAL);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRADIENT_HORIZONTAL", strip_prefix), META_GRADIENT_HORIZONTAL);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRADIENT_DIAGONAL", strip_prefix), META_GRADIENT_DIAGONAL);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GRADIENT_LAST", strip_prefix), META_GRADIENT_LAST);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_THEME_ERROR_FRAME_GEOMETRY", strip_prefix), META_THEME_ERROR_FRAME_GEOMETRY);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_THEME_ERROR_BAD_CHARACTER", strip_prefix), META_THEME_ERROR_BAD_CHARACTER);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_THEME_ERROR_BAD_PARENS", strip_prefix), META_THEME_ERROR_BAD_PARENS);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_THEME_ERROR_UNKNOWN_VARIABLE", strip_prefix), META_THEME_ERROR_UNKNOWN_VARIABLE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_THEME_ERROR_DIVIDE_BY_ZERO", strip_prefix), META_THEME_ERROR_DIVIDE_BY_ZERO);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_THEME_ERROR_MOD_ON_FLOAT", strip_prefix), META_THEME_ERROR_MOD_ON_FLOAT);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_THEME_ERROR_FAILED", strip_prefix), META_THEME_ERROR_FAILED);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_SIZING_ASPECT", strip_prefix), META_BUTTON_SIZING_ASPECT);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_SIZING_FIXED", strip_prefix), META_BUTTON_SIZING_FIXED);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_SIZING_LAST", strip_prefix), META_BUTTON_SIZING_LAST);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_IMAGE_FILL_SCALE", strip_prefix), META_IMAGE_FILL_SCALE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_IMAGE_FILL_TILE", strip_prefix), META_IMAGE_FILL_TILE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_COLOR_SPEC_BASIC", strip_prefix), META_COLOR_SPEC_BASIC);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_COLOR_SPEC_GTK", strip_prefix), META_COLOR_SPEC_GTK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_COLOR_SPEC_BLEND", strip_prefix), META_COLOR_SPEC_BLEND);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_COLOR_SPEC_SHADE", strip_prefix), META_COLOR_SPEC_SHADE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GTK_COLOR_FG", strip_prefix), META_GTK_COLOR_FG);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GTK_COLOR_BG", strip_prefix), META_GTK_COLOR_BG);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GTK_COLOR_LIGHT", strip_prefix), META_GTK_COLOR_LIGHT);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GTK_COLOR_DARK", strip_prefix), META_GTK_COLOR_DARK);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GTK_COLOR_MID", strip_prefix), META_GTK_COLOR_MID);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GTK_COLOR_TEXT", strip_prefix), META_GTK_COLOR_TEXT);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GTK_COLOR_BASE", strip_prefix), META_GTK_COLOR_BASE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GTK_COLOR_TEXT_AA", strip_prefix), META_GTK_COLOR_TEXT_AA);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_GTK_COLOR_LAST", strip_prefix), META_GTK_COLOR_LAST);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_LINE", strip_prefix), META_DRAW_LINE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_RECTANGLE", strip_prefix), META_DRAW_RECTANGLE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_ARC", strip_prefix), META_DRAW_ARC);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_CLIP", strip_prefix), META_DRAW_CLIP);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_TINT", strip_prefix), META_DRAW_TINT);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_GRADIENT", strip_prefix), META_DRAW_GRADIENT);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_IMAGE", strip_prefix), META_DRAW_IMAGE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_GTK_ARROW", strip_prefix), META_DRAW_GTK_ARROW);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_GTK_BOX", strip_prefix), META_DRAW_GTK_BOX);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_GTK_VLINE", strip_prefix), META_DRAW_GTK_VLINE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_ICON", strip_prefix), META_DRAW_ICON);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_TITLE", strip_prefix), META_DRAW_TITLE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_OP_LIST", strip_prefix), META_DRAW_OP_LIST);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_DRAW_TILE", strip_prefix), META_DRAW_TILE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_STATE_NORMAL", strip_prefix), META_BUTTON_STATE_NORMAL);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_STATE_PRESSED", strip_prefix), META_BUTTON_STATE_PRESSED);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_STATE_PRELIGHT", strip_prefix), META_BUTTON_STATE_PRELIGHT);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_STATE_LAST", strip_prefix), META_BUTTON_STATE_LAST);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_TYPE_LEFT_LEFT_BACKGROUND", strip_prefix), META_BUTTON_TYPE_LEFT_LEFT_BACKGROUND);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_TYPE_LEFT_MIDDLE_BACKGROUND", strip_prefix), META_BUTTON_TYPE_LEFT_MIDDLE_BACKGROUND);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_TYPE_LEFT_RIGHT_BACKGROUND", strip_prefix), META_BUTTON_TYPE_LEFT_RIGHT_BACKGROUND);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_TYPE_RIGHT_LEFT_BACKGROUND", strip_prefix), META_BUTTON_TYPE_RIGHT_LEFT_BACKGROUND);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_TYPE_RIGHT_MIDDLE_BACKGROUND", strip_prefix), META_BUTTON_TYPE_RIGHT_MIDDLE_BACKGROUND);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_TYPE_RIGHT_RIGHT_BACKGROUND", strip_prefix), META_BUTTON_TYPE_RIGHT_RIGHT_BACKGROUND);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_TYPE_CLOSE", strip_prefix), META_BUTTON_TYPE_CLOSE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_TYPE_MAXIMIZE", strip_prefix), META_BUTTON_TYPE_MAXIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_TYPE_MINIMIZE", strip_prefix), META_BUTTON_TYPE_MINIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_TYPE_MENU", strip_prefix), META_BUTTON_TYPE_MENU);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_BUTTON_TYPE_LAST", strip_prefix), META_BUTTON_TYPE_LAST);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_ICON_TYPE_CLOSE", strip_prefix), META_MENU_ICON_TYPE_CLOSE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_ICON_TYPE_MAXIMIZE", strip_prefix), META_MENU_ICON_TYPE_MAXIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_ICON_TYPE_UNMAXIMIZE", strip_prefix), META_MENU_ICON_TYPE_UNMAXIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_ICON_TYPE_MINIMIZE", strip_prefix), META_MENU_ICON_TYPE_MINIMIZE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_MENU_ICON_TYPE_LAST", strip_prefix), META_MENU_ICON_TYPE_LAST);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_ENTIRE_BACKGROUND", strip_prefix), META_FRAME_PIECE_ENTIRE_BACKGROUND);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_TITLEBAR", strip_prefix), META_FRAME_PIECE_TITLEBAR);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_TITLEBAR_MIDDLE", strip_prefix), META_FRAME_PIECE_TITLEBAR_MIDDLE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_LEFT_TITLEBAR_EDGE", strip_prefix), META_FRAME_PIECE_LEFT_TITLEBAR_EDGE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_RIGHT_TITLEBAR_EDGE", strip_prefix), META_FRAME_PIECE_RIGHT_TITLEBAR_EDGE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_TOP_TITLEBAR_EDGE", strip_prefix), META_FRAME_PIECE_TOP_TITLEBAR_EDGE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_BOTTOM_TITLEBAR_EDGE", strip_prefix), META_FRAME_PIECE_BOTTOM_TITLEBAR_EDGE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_TITLE", strip_prefix), META_FRAME_PIECE_TITLE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_LEFT_EDGE", strip_prefix), META_FRAME_PIECE_LEFT_EDGE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_RIGHT_EDGE", strip_prefix), META_FRAME_PIECE_RIGHT_EDGE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_BOTTOM_EDGE", strip_prefix), META_FRAME_PIECE_BOTTOM_EDGE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_OVERLAY", strip_prefix), META_FRAME_PIECE_OVERLAY);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_PIECE_LAST", strip_prefix), META_FRAME_PIECE_LAST);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_STATE_NORMAL", strip_prefix), META_FRAME_STATE_NORMAL);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_STATE_MAXIMIZED", strip_prefix), META_FRAME_STATE_MAXIMIZED);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_STATE_SHADED", strip_prefix), META_FRAME_STATE_SHADED);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_STATE_MAXIMIZED_AND_SHADED", strip_prefix), META_FRAME_STATE_MAXIMIZED_AND_SHADED);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_STATE_LAST", strip_prefix), META_FRAME_STATE_LAST);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_RESIZE_NONE", strip_prefix), META_FRAME_RESIZE_NONE);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_RESIZE_VERTICAL", strip_prefix), META_FRAME_RESIZE_VERTICAL);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_RESIZE_HORIZONTAL", strip_prefix), META_FRAME_RESIZE_HORIZONTAL);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_RESIZE_BOTH", strip_prefix), META_FRAME_RESIZE_BOTH);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_RESIZE_LAST", strip_prefix), META_FRAME_RESIZE_LAST);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_FOCUS_NO", strip_prefix), META_FRAME_FOCUS_NO);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_FOCUS_YES", strip_prefix), META_FRAME_FOCUS_YES);
    PyModule_AddIntConstant(module, (char *) pyg_constant_strip_prefix("META_FRAME_FOCUS_LAST", strip_prefix), META_FRAME_FOCUS_LAST);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pyconsortium_register_classes(PyObject *d)
{
    PyObject *module;

    if ((module = PyImport_ImportModule("gobject")) != NULL) {
        _PyGObject_Type = (PyTypeObject *)PyObject_GetAttrString(module, "GObject");
        if (_PyGObject_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name GObject from gobject");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gobject");
        return ;
    }
    if ((module = PyImport_ImportModule("pango")) != NULL) {
        _PyPangoContext_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Context");
        if (_PyPangoContext_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Context from pango");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import pango");
        return ;
    }
    if ((module = PyImport_ImportModule("gtk")) != NULL) {
        _PyGtkWidget_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Widget");
        if (_PyGtkWidget_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Widget from gtk");
            return ;
        }
        _PyGtkBin_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Bin");
        if (_PyGtkBin_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Bin from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }
    if ((module = PyImport_ImportModule("gtk.gdk")) != NULL) {
        _PyGdkPixbuf_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Pixbuf");
        if (_PyGdkPixbuf_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Pixbuf from gtk.gdk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk.gdk");
        return ;
    }


#line 1142 "consortium.c"
    pyg_register_pointer(d, "Theme", META_TYPE_THEME, &PyMetaTheme_Type);
    pygobject_register_class(d, "MetaPreview", META_TYPE_PREVIEW, &PyMetaPreview_Type, Py_BuildValue("(O)", &PyGtkBin_Type));
    pyg_set_object_has_new_constructor(META_TYPE_PREVIEW);
}
