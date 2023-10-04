#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _strdup -duplicates strings into other pointers
  * @str: string to created as duplicate
  * Return: pointer to copied string
  */
char *_strdup(char *str)
{
	char *ptr;
	int length;

	length = strlen(str) + 1;
	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(length);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}
