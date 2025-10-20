/* Compares two strings up to a maximum of n characters.
 * If either string is NULL, the function returns 84.
 *
 * It returns the difference between the first differing
 * characters, or 0 if the first n characters are identical
 * or if the end of at least one string is reached
 * before that.
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
