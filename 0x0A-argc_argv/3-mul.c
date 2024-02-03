#include <stdio.h>
#include <stdlib.h>

/**
* main -code entry point
* @argc: argument count
* @argv: argument vector
* Return: always 0
*/
int main(int argc, char **argv)
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);

	return (0);
}
