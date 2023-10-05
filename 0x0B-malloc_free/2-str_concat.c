#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * str_concat -conctinates two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to new string
  */
char *str_concat(char *s1, char *s2)
{
	char *join;/*pointer for the result of concatination*/
	int len1;
	int len2;

	/*Incase either is NULL empty string*/
	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	/*finds total length to be allocated*/
	len1 = strlen(s1);
	len2 = strlen(s2);
	join = malloc(len1 + len2 + 1);
	if (join == NULL)
	{
		return (NULL);
	}

	strcpy(join, s1);/*copies first string*/
	strcat(join, s2);/*concatenates second string*/
	return (join);
}
