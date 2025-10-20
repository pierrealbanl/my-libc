/* Contains the declarations for string manipulation functions.
 * This library provides several utilities similar to those in
 * the standard C library.
 */

#ifndef STR_H
    #define STR_H

    #include <stddef.h>
    #include <stdio.h>
    #include <stdlib.h>

    size_t strlength(const char *str);
    int strcompare(const char *str1, const char *str2);
    int strncompare(const char *str1, const char *str2, const size_t n);
    char *strcopy(char *dest, const char *src);
    char *strncopy(char *dest, const char *src, const size_t n);
    char *strduplicate(const char *src);
    char *strnduplicate(const char *src, const size_t n);
    char *strsubstr(char *str, const char *subStr);
    char **strarray(const char *str);

#endif
