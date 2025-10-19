/* Contains the "strduplicate" function, which duplicates
 * a string. The function dynamically allocates new memory, copies
 * each character from the source string into it, and adds
 * the terminating null character '\0'.
 *
 * Returns a pointer to the newly duplicated string and if the
 * source string is NULL or if memory allocation fails,
 * the function returns NULL.
 */

#include "../../include/str.h"

char *strduplicate(const char *src) {

    size_t i = 0;
    char *dest = NULL;

    if (src == NULL)
        return NULL;
    dest = malloc((strlength(src) + 1) * sizeof(char));
    if (dest == NULL)
        return NULL;
    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
