/*
 * File: 1-alphabet
 */

#include "main.h"

/* 
 * prints the alphbets in lower case
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
