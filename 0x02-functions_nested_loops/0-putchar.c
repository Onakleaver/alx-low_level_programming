#include "main.h"

/**
 * main - prints _putchar followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char c = "_putchar";

	while (c)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n')
	return (0);
}
