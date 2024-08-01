#include "main.h"
#include <string.h>

/**
  * rev_string -reverses strings
  * @s: pointer to string
  */
void rev_string(char *s)
{
	int i;
	char *a;
	int length = strlen(s);

	a = s[length - 1];
	for (i = length - 1; i >= 0; i--)
	{
		j[a] = s[i];
		a++;
	}
}
