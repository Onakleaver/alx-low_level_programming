#include "main.h"
#include <string.h>

/**
 * _strncpy - copies two strings up to a specific character number
 * @dest: destinantion string
 * @src: source string
 * @n: maximam number of characters to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
