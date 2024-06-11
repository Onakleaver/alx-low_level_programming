#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _memset - fills a block of memory with specified value
 * @s: pointer to memory to be filled
 * @b: value to be set
 * @n: number of bytes
 * Return: s array
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
