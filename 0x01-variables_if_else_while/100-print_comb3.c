 #include<stdio.h>
/**
  *main -Entry point
  *
  *Return:Always (0);
  */
int main(void)
{
	int a;
	int b;
	int c;

	c = ',';
	for (a = 48; a < 57; a++)
	{
		for (b = 48; b < 57; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
				putchar(c);
			}
		}
	}
	putchar('\n');
	return (0);
}
