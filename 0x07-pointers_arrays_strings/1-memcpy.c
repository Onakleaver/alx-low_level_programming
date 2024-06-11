#include "main.h"

/**
 * _memcpy - copies characters from one file to another location
 * @dest: pointer to the destination file
 * @src: data to be copied
 * @n: size of data to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		dest = src;
	}
	return (dest);
}
