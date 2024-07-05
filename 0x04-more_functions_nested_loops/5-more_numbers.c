#include "main.h"

/**
 * more_numbers -prints numbers 0-14 ten times
 * Return: Always 0
 */

void more_numbers(void)
{
	int a;
	int b;
	int c;

	a = 0;

	while (a < 9)
	{
		for (b = 0; b <= 1; b++)
		{
			_putchar(b + '0');
			for (c = 0; c <= 9; c++)
			{
				_putchar (c + '0');
			}
		}
		_putchar ('\n');
	}
}
