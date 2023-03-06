#include "main.h"
#include <string.h>

/**
 * _strncat - concartinates two strings
 * @dest: test destination string
 * @src: test source string
 *@n: number of bytes src can store
 * Return: pointer to resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	size_t n;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	
	dest[dest_len + i] = src[i];

	return (dest);
}
