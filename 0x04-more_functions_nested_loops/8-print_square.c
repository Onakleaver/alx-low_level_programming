#include "main.h"

/**
 * print_square -prints square
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int a;

	if (size == 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		_putchar('#');
	}
}
