#include "main.h"

/**
  * main -prints the name of the programme
  * @argc: counts command line arguments
  * @argv: shows commandline arguments
  * Return: void
  */

int main(int argc, char *argv[])
{
	char *a = argv[0];

	(void)argc;	
	if (*a != '\0')
	{
		_putchar(*a);
		_putchar('\n');
	}

	return (0);
}
