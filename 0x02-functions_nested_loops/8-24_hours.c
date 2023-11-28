#include "main.h"


void jack_bauer(void)
{
	int a, b, c, d, e;

	a = 48;
	b = 48;
	c = 58;
	d = 48;
	e = 48;

	for (a = 48; a <= 50; a++)
	{
		_putchar(a);
		a++;
		while (b <= 51)
		{
			_putchar(b);
			_putchar(c);
			b++;
			while (d <= 53)
			{
				_putchar(d);
				d++;
				while (e <= 57)
				{
					_putchar(e);
					_putchar('\n');
					e++;
				}
			}
		}
	}
}
