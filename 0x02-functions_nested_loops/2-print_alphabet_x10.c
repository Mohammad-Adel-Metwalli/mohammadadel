#include "main.h"

/**
 * print_alphabet_x10 - utilizes on the _putchar function to print
 * the alphabet a - z
 */
void print_alphabet_x10(void)
{
	int i, j;

	char word[] = "abcdefghijklmnopqrstuvwxyz";

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26 ; i++)
		{
			_putchar(word[i]);
		}
		_putchar('\n');
	}
}
