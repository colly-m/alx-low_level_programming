#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print numbers of base 10 using putchar'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
