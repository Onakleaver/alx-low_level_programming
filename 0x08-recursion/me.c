#include <stdio.h>

int main()
{
	char *s;
	int a;

	s = "kleaver";
	a = 0;
	if (*s != '\0')
	{
		a++;		
	}
	putchar(a);
	return (a);
}
