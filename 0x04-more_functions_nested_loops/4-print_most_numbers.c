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

	a = 48;
	while (a < 58)
	{
		if (a == 50 || a == 57)
		{
			a++;
		}
		else
		{
			_putchar(a + 0);
			_putchar('\n');
		}
		a++;
	}
}
