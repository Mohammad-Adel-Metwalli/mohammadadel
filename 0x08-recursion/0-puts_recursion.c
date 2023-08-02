#include "main.h"

/**
 * _puts_recursion - a function that prints a string in recursive way
 *
 * @s: pointer to character array
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
