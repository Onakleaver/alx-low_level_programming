#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "My School";

	printf("%S\n", s);
	rev-string(s);
	printf("%s\n", s);
	return (0);
}
