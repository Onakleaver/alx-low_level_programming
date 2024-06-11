#include "main.h"

/**
* jack_bauer- prints every minuite of the day
* Return: Nothing
*/
void jack_bauer(void)
{
	int a, c;

	for (a = 0; a < 24; a++)
	{
		for (c = 0; c < 60; c++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar('\n');
		}
	}
}
