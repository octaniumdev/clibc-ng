#ifndef CCSTD_H_
#define CCSTD_H_
#define dynarray(T) T*
#define arr_size(A) (sizeof(A) / sizeof(A[0]))

typedef const char* str;

typedef struct _iobuf {
    char*   _ptr;
    int _cnt;
    char*   _base;
    int _flag;
    int _file;   
    int _charbuf;
    int _bufsiz;
    char*   _tmpfname;
} FILE;

typedef unsigned long size_t;

extern FILE* stdout;
extern FILE* stdin;
extern FILE* stderr;
#endif /* CCSTD_H_ */
