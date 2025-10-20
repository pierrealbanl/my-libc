/* Contains functions used to split a string into separate
 * words and store them in a dynamically allocated array.
 * The "rowlength" function counts how many words are
 * present in the string, while "strarray" splits the string
 * into individual words and allocates dynamic memory
 * for each one.
 *
 * Returns a NULL-terminated array of strings.
 */

#include "../../include/str.h"

static size_t rowlength(const char *str) {

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 33 && str[i] <= 126) &&
            (str[i + 1] == ' ' ||
            str[i + 1] == '\0'))
            count++;
    }
    return count;
}

char **strarray(const char *str) {

    char **array = NULL;
    size_t currentRow = 0;
    size_t currentColumn = 0;
    size_t columnLength = 0;

    if (str == NULL)
        return NULL;
    array = malloc(rowlength(str) * sizeof(char *));
    if (array == NULL)
        return NULL;
    for (; currentRow < rowlength(str); currentRow++) {
        for (; str[currentColumn] != '\0'; currentColumn++) {
            if (str[currentColumn] == ' ') {
                currentColumn++;
            }
            if (str[currentColumn] != ' ') {
                columnLength++;
                if (str[currentColumn + 1] == ' ' ||
                    str[currentColumn + 1] == '\0')
                    break;
            }
        }
        array[currentRow] = malloc(columnLength + 1 * sizeof(char));
        strncopy(array[currentRow], &str[currentColumn - (columnLength - 1)], columnLength);
        /* You can uncomment the line below to test  the display of each extracted word:
         * printf("array[%zu] = %s\n", current_row, array[current_row]);
         */
        array[currentRow][columnLength] = '\0';
        columnLength = 0;
        currentColumn++;
    }
    array[rowlength(str)] = NULL;
    return array;
}
