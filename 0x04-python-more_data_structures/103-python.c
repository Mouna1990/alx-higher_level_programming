#include <Python.h>
#include <stdio.h>

/**
* print_python_list - Prints information about a Python list
* @p: Pointer to the Python list (PyObject)
*/
void print_python_list(PyObject *p)
{
PyListObject *list = (PyListObject *)p;
Py_ssize_t size = PyList_Size(p);
Py_ssize_t i;

printf("[*] Python list info\n");
printf("[*] Size of the Python List = %ld\n", size);
printf("[*] Allocated = %ld\n", list->allocated);

for (i = 0; i < size; i++)
{
printf("Element %ld: %s\n", i, Py_TYPE(PyList_GetItem(p, i))->tp_name);
if (strcmp(Py_TYPE(PyList_GetItem(p, i))->tp_name, "bytes") == 0)
print_python_bytes(PyList_GetItem(p, i));
}
}

/**
* print_python_bytes - Prints information about a Python bytes object
* @p: Pointer to the Python bytes object (PyObject)
*/
void print_python_bytes(PyObject *p)
{
PyBytesObject *bytes = (PyBytesObject *)p;
Py_ssize_t size = PyBytes_Size(p);
Py_ssize_t i;
char *string;

printf("[.] bytes object info\n");
printf("  size: %ld\n", size);
printf("  trying string: %s\n", PyBytes_AsString(p));

if (size > 10)
size = 10;

string = PyBytes_AsString(p);
printf("  first %ld bytes: ", size + 1);
for (i = 0; i < size; i++)
{
printf("%02hhx", string[i]);
if (i < size - 1)
printf(" ");
}
printf("\n");
}
