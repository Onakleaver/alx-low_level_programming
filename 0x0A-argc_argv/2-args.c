#include <stdio.h>

/**
  * main -code entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: always 0
  */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}

	return (0);
}
