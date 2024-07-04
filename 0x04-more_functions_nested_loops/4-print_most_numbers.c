#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 0 to 9
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int a;

	while (a < 58)
	{
		if (a == 50 || a == 57)
		{
			a++;
		}
		else
		{
			_putchar(a);
			_putchar('\n');
		}
		a++;
	}
}
