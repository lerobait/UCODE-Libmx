#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (!s) return NULL;
    
    int j = 0;
    int w_len = 0;
    char **res = NULL;
    res = (char **)malloc((mx_count_words(s, c) + 1) * sizeof(char *));

    while ((*s != '\0') && (*s)) {
        if (*s != c) {
            w_len = mx_count_letters(s, c);
            res[j] = mx_strndup(s, w_len);
            s += w_len;
            j++;
            continue;
        }
        s++;
    }
    res[j] = NULL;
    return res; 
}
