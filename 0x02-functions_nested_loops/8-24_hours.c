#include "main.h"

/**
  * jack_bauer- prints every minuite of the day
  * Return: Nothing
  */
void jack_bauer(void)
{
	int a, b, c, d, f;

	f = 58;
	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 51; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(f);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
