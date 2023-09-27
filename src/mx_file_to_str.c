#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    if (!file) return NULL;

    int file_1 = open(file, O_RDONLY);

    if (file_1 < 0) return NULL;

    char c;
    int len = 0;

    while (read(file_1, &c, 1) != 0) {
        len++;
    }
    close(file_1);

    file_1 = open(file, O_RDONLY);
    char *newstr = mx_strnew(1);

    read(file_1, newstr, len);

    close(file_1);
    return newstr;
}
