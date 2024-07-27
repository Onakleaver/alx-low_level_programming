#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints out string in reverse
 * @s: pointer to string
 */
void print_rev(char *s)
{
	int length = strlen(s);
	/* gets the full length of the string */
	int i;

	for (i = length - 1; i >= 0; i--)
		/*The loop starts from the last character in the string after the null */
	{
		_putchar(s[i]);
		/* prints the string at the i'th position */
	}
	_putchar('\n');
}
