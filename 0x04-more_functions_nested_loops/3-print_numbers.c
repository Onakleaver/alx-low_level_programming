#include "main.h"
#include<stdio.h>
/**
 * print_numbers -prints the numbers 0 to 9 followed by a new line
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
