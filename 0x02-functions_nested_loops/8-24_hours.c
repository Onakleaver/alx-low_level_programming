#include "main.h"

<<<<<<< HEAD
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
=======

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
>>>>>>> 1c20753970dd42143fca6f5e2c4c6bfd7d0ebcad
				}
			}
		}
	}
}
