#include"main.h"
/**
  * print_alphabet_x10 -Prints alphabet in lowercase ten times
  *
  * Return: Void
  */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 48;
	while (i <= 57)
	{
		c = 97;
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');
	}
}
