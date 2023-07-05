#include "main.h"

/**
 * _puts_recursion - prints characters recursiveley
 * @s: pointer to the characters
 * Return: pointed characters
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
	return(0);
}
