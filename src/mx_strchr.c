#include "../inc/libmx.h"

char *mx_strchr(const char *s, int c) {
    if (c > 0 && c < 127) {
        char g = (char)c;
    
        for (int i = 0; s[i]; ++i) {
            if (s[i] == g) {
                return (char*)(s + i);
            }
        }
        return 0;
    }
    else
        return 0;
}
