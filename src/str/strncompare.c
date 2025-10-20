/* Contains the "strncompare" function, which compares
 * two strings up to a maximum of n characters.
 * The comparison stops if a difference is found, if the
 * end of one of the strings is reached, or if n characters
 * have been compared. If one of the strings is NULL, the
 * function returns 84.
 *
 * Returns the numerical difference between the first differing
 * characters, 0 if both strings are identical up to n characters,
 * or 84 if one of the input strings is NULL.
 */

#include "../../include/str.h"

int strncompare(const char *str1, const char *str2, const size_t n) {

    if (str1 == NULL || str2 == NULL)
        return 84;
    for (size_t i = 0; (str1[i] != '\0' || str2[i] != '\0') && i < n; i++)
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
    return 0;
}
