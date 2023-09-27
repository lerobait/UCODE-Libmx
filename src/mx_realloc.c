#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    void *new_ptr;
    size_t prev_size;

    if (ptr == 0) {
        return malloc(size);
    }
    prev_size = malloc_size(ptr);

    if (size <= prev_size) {
        return ptr;
    }
    new_ptr = malloc(size);
    mx_memcpy(new_ptr, ptr, prev_size);
    free(ptr);
    return new_ptr;
}
