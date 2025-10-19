/* Contains the "strsubstr" function, which searches
 * for the first occurrence of a substring within a
 * main string. The function iterates through the string
 * character by character and compares it with the given
 * substring. If all characters of the substring match, it
 * returns a pointer to the beginning of that occurrence
 * in the original string.
 *
 * If the substring is empty, the function returns the original
 * string. If no match is found, it returns NULL.
 */

#include "../../include/str.h"

char *strsubstr(char *str, const char *subStr) {

    size_t j = 0;
    size_t indexTemp = 0;

    if (subStr[0] == '\0')
        return str;
    for (size_t i = 0; str[i] != '\0'; i++) {
        indexTemp = i;
        for (; str[indexTemp] == subStr[j]; indexTemp++ && j++)
            if (subStr[j + 1] == '\0')
                return &str[i];
        j = 0;
    }
    return NULL;
}
