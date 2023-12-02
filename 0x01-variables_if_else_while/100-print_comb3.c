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

	a = 0;
	b = 0;
	c = ',';
	while (a < 9)
	{
		b = 0;
		while (b < 9)
		{
			if (a*10+b != b*10+a)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c);
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
