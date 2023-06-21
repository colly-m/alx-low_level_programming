#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*positive_or_negative - Prints the number positive negative or zero
*@i: integer
*if the number is greater than 0: is positive, if number is 0: is zero
*if number is less than 0: is negative, followed by a new line
*Return: always 0 (success)
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
