#include "main.h"

/**
 * print_diagonal -prints a diagonal line on the terminal
 * @n: number of times the line is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b != a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
