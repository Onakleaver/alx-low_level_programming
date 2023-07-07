#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: prints number of arguments
 * @argv: prints out the commands entered
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = argc;
	char c = i + '0';

	(void)*argv;
	_putchar(c);
	_putchar('\n');
	return (0);
}
