#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	puts("Size of a char: %lu byte(s)",(unsigned long)sizeof(d));
	puts("Size of an int: %lu byte(s)",(unsigned long)sizeof(a));
	puts("Size of a long int: %lu byte(s)",(unsigned long)sizeof(b));
	puts("Size of a long long int: %lu bytes(s)",(unsigned long)sizeof(c));
	puts("Size of a float: %lu byte(s)",(unsigned long)sizeof(f));
	return (0);
}
