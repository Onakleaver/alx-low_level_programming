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
	char reversed[length + 1];
	int j = 0;

	for (int i = length - 1; i >= 0; i--)
	{
		reversed[j] = str[i];
		j++;
	}
	reversed[j] = '\0';
	puts(reversed);
}
