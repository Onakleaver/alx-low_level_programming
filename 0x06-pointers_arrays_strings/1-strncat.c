#include "main.h"
#include <string.h>

/**
 * _strncat - concatinates string with a specific maximum
 * @dest: destinantion string
 * @src: source string
 * @n: maximum number of characters to apend from source string
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
