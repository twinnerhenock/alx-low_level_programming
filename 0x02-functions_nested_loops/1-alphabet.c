#include "main.h"

/**
 * print_alphabet - Print the "letters" in lower case.
 * Description: Ends with a new line.
 */
void print_alphabet(void)
{
	char letter;
	int i;

	for (i = 0; i <=9; i++)
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	_putchar('\n');
}
