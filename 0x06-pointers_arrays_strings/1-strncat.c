#include "main.h"
/**
 * _strncat - concatenates two strings using n bytes
 * @dest: first string to be appended
 * @src: second string to append
 * @n: max number of bytes to be used
 *
 * return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
        int dest_len = 0, index = 0;

        while (dest[index++])
                dest_len++;

        for (index = 0; index < n && src[index]; index++)
                dest[dest_len++] = src[index];

        dest[dest_len] = '\0';
        return (dest);
}
