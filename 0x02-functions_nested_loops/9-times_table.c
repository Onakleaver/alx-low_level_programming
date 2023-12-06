#include "main.h"

/**
 * times_table -prints times tables from 0
 * Return: Nothing
 */

void times_table(void)
{
	int a, b, c;

	a = 0;
	b = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = a * b;
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				_putchar(c + '0');
			}
			if (b < 9)
			{
				_putchar(',');
			}
			b++;
		}
		a++;
		_putchar('\n');
	}
}
