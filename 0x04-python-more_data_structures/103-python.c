#include <Python.h>

void print_python_list(PyObject *p) {
    if (PyList_Check(p)) {
        Py_ssize_t size = PyList_Size(p);
        PyObject *item;

        printf("[*] Python list info\n");
        printf("[*] Size of the Python List = %ld\n", size);
        printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

        for (Py_ssize_t i = 0; i < size; i++) {
            item = PyList_GetItem(p, i);
            printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
        }
    }
}

void print_python_bytes(PyObject *p) {
    if (PyBytes_Check(p)) {
        Py_ssize_t size = PyBytes_GET_SIZE(p);
        char *bytes_data = PyBytes_AsString(p);

        printf("[.] bytes object info\n");
        printf("  size: %ld\n", size);
        printf("  trying string: %s\n", bytes_data);

        if (size > 10) {
            size = 10;
        }

        printf("  first %ld bytes:", size);
        for (Py_ssize_t i = 0; i < size; i++) {
            printf(" %02x", (unsigned char)bytes_data[i]);
        }
        printf("\n");
    } else {
        printf("[ERROR] Invalid Bytes Object\n");
    }
}
