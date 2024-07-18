#include "main.h"

/**
 * print_diagonal -prints a diagonal line on the terminal
 * @n: number of times the line is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
