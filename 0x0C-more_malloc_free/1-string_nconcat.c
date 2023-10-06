#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat -concatinates two strings into a new pointer
  * @s1: first string
  * @s2: second string
  * @n: first number of bytes to be copied from s2
  * Return: new pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	size = strlen(s1) + n + 1;
	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
