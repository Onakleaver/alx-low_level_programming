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
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
