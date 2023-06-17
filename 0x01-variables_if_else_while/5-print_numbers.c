#include <stdio.h>
/**
 *main - Entry point
 *Decription: 'Print numbers of base 10'
 *Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
