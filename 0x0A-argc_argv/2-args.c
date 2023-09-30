#include "main.h"

/**
  * main -entry point
  * @argc: counts number of arguments
  * @argv: shows the arguments
  * Return: always 0
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
