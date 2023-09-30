#include "main.h"

/**
  * main -entry point
  * @argc: counts the number of arguments
  * @argv: shows vaues of commands
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int i = argc - 1;
	char c = i + '0';

	(void)*argv;
	_putchar(c);
	_putchar('\n');
	return (0);
}
