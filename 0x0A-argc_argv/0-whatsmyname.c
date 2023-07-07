#include "main.h"
#include <stdio.h>
/**
 *main - function entry point
 *@argc: counts number of commands entered
 *@argv: shows values of commands
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *str = argv[0];

	(void)argc;
	while (*str != '\0')
	{
		_putchar(*str);
			str++;
	}
	_putchar('\n');

	return (0);
}
