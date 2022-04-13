/**
 * File: 1-alphabet
 */

#include "main.h"

/**
 * print_alphabet - prints the alphbets in lower case
 * 
 * Also ends with a new line
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
