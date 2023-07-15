#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: ponter to string to be counted
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		len++,
		s++;
	}
	return (len);
}
