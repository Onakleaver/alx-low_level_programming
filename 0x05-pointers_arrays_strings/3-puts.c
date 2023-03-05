#include "main.h"

/**
 * _puts - print string to stdout
 * @str: arry string type
 * Description: use only _putchar
 */

void _puts(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}

	_putchar('\n')
}
