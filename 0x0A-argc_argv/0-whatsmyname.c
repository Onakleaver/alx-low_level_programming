#include "main.h"

/**
* main - prints name of executable programe
* @argc: counts command line arguments
* @argv: shows values entered
* Return: always 0
*/
int main(int argc, char *argv[])
{
	char *i = argv[0];

	(void)argc;
	while (*i != '\0')
	{
		_putchar(*i);
		i++;
	}
	_putchar('\n');

	return (0);
}
