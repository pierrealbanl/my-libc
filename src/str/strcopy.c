/* Contains the "strcopy" function, which copies the
 * contents of a source string ("src") into a destination
 * string ("dest"). The copied string is properly terminated
 * with a null character ('\0').
 *
 * Returns a pointer to the destination string.
 */

#include "../../include/str.h"

char *strcopy(char *dest, const char *src) {

    size_t i = 0;

    if (dest == NULL || src == NULL)
        return NULL;
    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
