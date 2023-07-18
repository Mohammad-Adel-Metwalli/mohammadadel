#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'Code for print alpha'
 *
 * Return: Always 0 (Success)
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
