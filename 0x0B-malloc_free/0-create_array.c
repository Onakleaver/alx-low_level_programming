#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates a pointer to an array
 * @size: size to be allocated
 * @c: character to be stored
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	char *ptr2;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	ptr2 = ptr;
	while (size > 0)
	{
		*ptr = c;
		ptr = ptr + 1;
		size--;
	}
	return (ptr2);
}
