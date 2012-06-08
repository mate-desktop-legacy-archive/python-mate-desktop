/* -*- Mode: C; c-basic-offset: 4 -*- */
#include <Python.h>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include <libmatewnck/libmatewnck.h>

/* include this first, before NO_IMPORT_PYGOBJECT is defined */
#include <pygobject.h>

#include <pygtk/pygtk.h>

void pymatewnck_register_classes(PyObject *d);
void pymatewnck_add_constants(PyObject *module, const gchar *strip_prefix);

extern PyMethodDef pymatewnck_functions[];

DL_EXPORT(void)
initmatewnck (void)
{
	PyObject *m, *d;

	init_pygobject();
	init_pygtk ();

	m = Py_InitModule ("matewnck", pymatewnck_functions);
	d = PyModule_GetDict (m);

	pymatewnck_register_classes (d);
        pymatewnck_add_constants(m, "MATEWNCK_");
}
