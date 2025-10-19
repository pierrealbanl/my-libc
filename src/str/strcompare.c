/* Contains the "strcompare" function, which compares
 * two strings character by character. The function first
 * checks if both strings have the same length using "strlength",
 * then compares their contents.
 *
 * Returns 0 if both strings are identical, 1 if they differ
 * in content, -1 if they differ in length, and 84 if one
 * of the input strings is NULL.
 */

#include "../../include/str.h"

int strcompare(const char *str1, const char *str2) {

    if (str1 == NULL || str2 == NULL)
        return 84;
    for (size_t i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (strlength(str1) != strlength(str2))
            return -1;
        if (str1[i] != str2[i])
            return 1;
    }
    return 0;
}
