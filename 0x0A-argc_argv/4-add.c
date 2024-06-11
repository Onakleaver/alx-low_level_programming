#include <stdio.h>
#include <stdlib.h>
/**
 * main -code entry point
 *
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int a;
	int sum;
	char *endptr;
	int num;

	(void) argc;
	sum = 0;

	for (a = 1; a < argc; a++)
	{
		num = strtol(argv[a], &endptr, 10);

	if (*endptr != '\0')
	{
	printf("Error \n");

	return (1);
	}

	if (num == 0)
	{
		printf("0 \n");
	}
	sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
