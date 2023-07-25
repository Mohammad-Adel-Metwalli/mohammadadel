#include "main.h"

/**
 * puts_half - a function that prints every other character of a string,
 *         starting with the first character, followed by a new line.
 *
 *
 * @str: pointer to string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	j = len % 2 == 0 ? len / 2 : len / 2 + 1;

	for (i = j; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
