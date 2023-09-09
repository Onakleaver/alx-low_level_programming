#include<stdio.h>
/**
  *main -Entry point
  *
  *Return:Always (0);
  */
int main(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		int mbur = 48;

		while (mbur <= 57)
		{
			putchar(num);
			putchar(mbur);
			putchar(',');
			putchar(' ');
			mbur++;
		}
		num++;
		putchar('\n');
	}
	return (0);
}
