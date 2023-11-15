#include "main.h"

/**
  * _puts_recursion - prints a string followed by a new line
  * @s: pointer to string
  * Return: nothing
  */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		/** The *s referes to the value stored in the pointer s**/
		s++;
		/**
		  * Increments the next character in the pointer
		  * till you reach the null character
		  */
	}
	_putchar('\n');
}
