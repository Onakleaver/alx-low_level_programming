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
	if (size == 0)
	{
		return (NULL);
	}

	char *array;

	array = malloc(size * sizeof(char));

	if (array != NULL)
	{
		for (unsinged int i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
