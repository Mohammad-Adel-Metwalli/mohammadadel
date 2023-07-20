#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: number of times the character \
 *
 * Return: 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				_putchar(92);
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
