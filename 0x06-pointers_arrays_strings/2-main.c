#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *ptr;
	int i;

	for (i = 0; i < 98 -1; i++)
	{
		s1[i] = '*';
	}
	s1[i] = '\0';
	printf("%s\n". s1);
	ptr = _strncpy(s1, "
