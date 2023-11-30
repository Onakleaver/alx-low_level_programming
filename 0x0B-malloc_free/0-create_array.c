#include "main.h"
#include <stdlib.h>
/**
  * create_array -entry point
  * @size: size of memory to be allocated
  * @c: pointer to malloc
  * Return: NULL if size = 0 or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}