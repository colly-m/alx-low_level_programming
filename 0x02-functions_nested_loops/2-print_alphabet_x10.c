#include "main.h"

/**
 *print_alphabet_x10 - prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int tenx;
	char letter;

	for (tenx = 0; tenx <= 9; tenx++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
