#include "main.h"

/**
 * _strcat - concartinates two strings
 * @dest: test destination string
 * @src: test source string
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int j = 0, i = 0;

	while (dest[j] != '\0')
	{
		i++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';

	return 0;
}
