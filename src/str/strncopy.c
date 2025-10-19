/* Contains the "strncopy" function, which copies
 * a specified number of characters from a source string ("src")
 * into a destination string ("dest"). The copying stops when
 * the limit `n` is reached or when the end of the source string
 * is encountered. The copied string is always
 * null-terminated ('\0').
 *
 * Returns a pointer to the destination string.
 */

#include "../../include/str.h"

char *strncopy(char *dest, const char *src, const size_t n) {

    size_t i = 0;

    if (dest == NULL || src == NULL)
        return NULL;
    for (; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
