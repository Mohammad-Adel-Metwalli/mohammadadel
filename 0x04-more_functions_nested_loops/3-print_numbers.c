#include "main.h"

/**
 * print_number - to print the numbers, from 0 to 9, followed by a new line
 * 
 * Return: numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
