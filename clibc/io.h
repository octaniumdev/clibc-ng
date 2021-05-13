#ifndef CCIO_H_
#define CCIO_H_
#include <stdarg.h>
#include "clibc/std.h"
// TODO: add modern C wrapper around these
extern int fprintf (FILE* __restrict __stream, str __restrict __format, ...);

extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
            const char *__restrict __format, ...);

#define io_write(x, ...) _Generic((x), \
    char*: printf,                  \
    str: printf,                    \
    FILE*: fprintf                  \
)(x, __VA_ARGS__);

#endif /* CCIO_H_ */
