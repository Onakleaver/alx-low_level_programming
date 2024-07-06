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
	c = 0;
	while (a < 10)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b <= 9)
			{
				_putchar(b + '0');
			}
			else
			{
				c = b % 10;
				_putchar('1');
				_putchar(c + '0');
			}
		}
		_putchar ('\n');
		a++;
	}
}
