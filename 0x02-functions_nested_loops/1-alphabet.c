#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 * the alphabet a - z
 */
void print_alphabet(void)
{
	int i;

	char word[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26 ; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
}
