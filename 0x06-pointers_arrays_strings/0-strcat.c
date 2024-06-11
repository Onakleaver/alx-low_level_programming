#include "main.h"
#include <string.h>

/**
 * _strcat - concatinates two strings
 * @dest: destinantion string
 * @src: source string
 * Return: dest string.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
