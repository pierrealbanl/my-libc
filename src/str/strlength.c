/* Contains the "strlength" function, which calculates
 * the length of a string. The function iterates through
 * the string until it reaches the null terminator ('\0').
 *
 * Returns the total number of characters found.
 * If the input string is NULL, the function returns 84.
 */

#include "../../include/str.h"

size_t strlength(const char *str) {

    size_t i = 0;

    if (str == NULL)
        return 84;
    while (str[i] != '\0')
        i++;
    return i;
}
