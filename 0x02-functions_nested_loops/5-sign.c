#include"main.h"

/**
  * print_sign -Prints the sign of the number
  * @n: number to be tested
  * Return: 1 if n > 0, 0 if n == 0 or -1 if n < 0
  */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}
