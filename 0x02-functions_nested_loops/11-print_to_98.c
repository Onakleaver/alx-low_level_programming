#include "main.h"

/**
  * print_to_98 -prints numbers to 98
  * @n: number to count from
  * Return: void
  */
void print_to_98(int n)
{
	int a;

	for (a = n; a < 98; n++)
	{
		if (n < 10)
		{
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}
