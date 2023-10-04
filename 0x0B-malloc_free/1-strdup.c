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
	char *ptr;/*Creates the duplicate pointer*/
	int length;/*integer to store length of pointer*/

	if (str == NULL)
	{
		return (NULL);
	}
	/*gets length to be allocated including the null terminator*/
	length = strlen(str) + 1;
	ptr = malloc(length);
	if (ptr == NULL)/*checks for return value of malloc*/
	{
		return (NULL);
	}
	/*uses strcpy to copy the string*/
	strcpy(ptr, str);
	return (ptr);
}
