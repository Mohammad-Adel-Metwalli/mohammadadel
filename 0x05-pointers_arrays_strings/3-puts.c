#include "main.h"

/**
 * _puts -  a function that takes a pointer to an int as parameter
 *                and updates the value it points to to 98.
 * @str: pointer to string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
