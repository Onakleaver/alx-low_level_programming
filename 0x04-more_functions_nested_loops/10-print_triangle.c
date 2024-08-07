#include "main.h"

/**
  * print_triangle -prints a triangle
  * @size: size of the triangle
  * Return: void
  */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 0; a < size; a++)
	{
		for (c = 0; c < size - a - 1; c++)
		{
			_putchar(' ');
		}
		for (b = 0; b <= a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
