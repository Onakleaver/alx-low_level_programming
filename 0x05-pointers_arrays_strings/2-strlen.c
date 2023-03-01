#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the lenth of a string
 * @s: character type pointer
 * Return: lenth of string 
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++);

	return (a);
}
