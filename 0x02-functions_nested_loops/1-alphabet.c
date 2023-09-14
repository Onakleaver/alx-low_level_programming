#include"main.h"

/**
 * print_alphabet -function that prints lowercase alphabet letters
 *
 * Return: Always (0)
 */
void print_alphabet(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
