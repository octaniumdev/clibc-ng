#ifndef CCIO_H_
#define CCIO_H_
#include <stdarg.h>
#include "clibc/std.h"
// TODO: add modern C wrapper around these
extern str fgets (str __restrict __s, int __n, FILE *__restrict __stream);

extern int fprintf (FILE* __restrict __stream, str __restrict __format, ...);

extern int printf (str __restrict __format, ...);

extern int sprintf (char *__restrict __s, str __restrict __format, ...);

#define io_write(x, ...) _Generic((x), \
    char*: printf,                  \
    str: printf,                    \
    FILE*: fprintf                  \
)(x, __VA_ARGS__);

str io_read(size_t size, FILE* stream) {
    byte data[size+1];
    return fgets(data, size, stream);
}

#endif /* CCIO_H_ */
