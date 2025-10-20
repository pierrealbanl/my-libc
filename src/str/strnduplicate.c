/* Contains the "strnduplicate" function, which duplicates
 * a string up to a maximum of n characters. The function
 * dynamically allocates new memory, copies at most n characters
 * from the source string, and adds the terminating null
 * character '\0'.
 *
 * Returns a pointer to the newly duplicated string. If the
 * source string is NULL or if memory allocation fails,
 * the function returns NULL.
 */

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
