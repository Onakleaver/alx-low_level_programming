#include "main.h"

/**
  * _puts_recursion - prints a string followed by a new line
  * @s: pointer to string
  * Return: nothing
  */

void _puts_recursion(char *s)
{
	if (*s != '\0')/** Base case **/
	{
		_putchar(*s);
		/** The *s referes to the value stored in the pointer s**/
		s++;
		_puts_recursion(s);
		/**
		  * Increments the next character in the pointer
		  * then recursively calls the function
		  * till you reach the null character then stops
		  */
	}
	else
	{
		_putchar('\n');
	}
}
