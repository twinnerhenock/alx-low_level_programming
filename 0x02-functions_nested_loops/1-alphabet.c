#include "main.h"

void print_alphabet(void)
/**
 * print_alphabet - prints the alphbets in lower case.
 * Description: ends with a new line.
 */
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
