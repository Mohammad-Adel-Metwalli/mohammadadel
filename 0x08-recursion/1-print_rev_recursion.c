#include "main.h"

/**
 * _print_rev_recursion - a function that prints a rev of
 *                        a string in recursive way
 *
 * @s: pointer to character array
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
