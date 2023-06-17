#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print possible combination of three digits'
 *Return: always 0 (Success)
 */
int main(void)
{
	int n, i, m;

	for (n = 48; n < 58; n++)
	{
		for (i = 49; i < 58; i++)
		{
			for (m = 50; m < 58; m++)
			{
				if (m > i && i > n)
				{
					putchar(n);
					putchar(i);
					putchar(m);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
