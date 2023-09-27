#include "../inc/libmx.h"

char *mx_strnew(const int size) {
    if (size >= 0) {
        char *memory = (char*)malloc(size + 1);

        for (int i = 0; i < size; i++) {
            memory[i] = '\0';
        }
        return memory;
    }
    else 
        return NULL;
}
