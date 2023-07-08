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
	int i;
	int j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}
	return (0);
}
