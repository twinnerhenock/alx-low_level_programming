/*
 * File: 1-alphabet
 */

#include "main.h"

void print_alphabet(void)
/*
 * prints the alphbets in lower case
 */
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
