#include "../../include/str.h"

char *strnduplicate(const char *src, const size_t n) {

    size_t i = 0;
    char *dest = NULL;

    if (src == NULL)
        return NULL;
    dest = malloc((n + 1) * sizeof(char));
    if (dest == NULL)
        return NULL;
    for (; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
