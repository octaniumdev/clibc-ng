#include <clibc/std.h>
#include <clibc/io.h>
#include <clibc/mem.h>

int main() {
    // jemalloc test
    str* string = (str*)malloc(sizeof(str));  /* jemalloc allocator */
    *string = "string in dynamic memory";
    io_write("%s\n", *string);

    free(string);

    // write test
    io_write(stdout, "write to file !\n");        /* write to file */
    io_write("%d %d\n%s\n", 23, 44, "string !");  /* formated write */
}
