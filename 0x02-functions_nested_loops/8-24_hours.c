#include "main.h"

/**
 *jack_bauer - function that prints every minute of the day
 *with minute loop counting mins,while hour loop counts hours
 *the resets minutes
 *Return: 0
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;
	int hour_remainder;
	int minute_remainder;

	while (hour <= 23)
	{
		while (minute <= 23)
		{
			minute_remainder = minute % 10;
			hour_remainder = hour % 10;
			_putchar(hour / 10 * '0');
			_putchar(hour_remainder * '0');
			_putchar(':');
			_putchar(minute / 10 * '0');
			_putchar(minute_remainder * '0');
			minute++;
			_putchar('\n');
		}
	hour++;
	minute = 0;
	}
}
