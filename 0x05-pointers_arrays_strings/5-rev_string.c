#include "main.h"
#include <string.h>

/**
 * rev_string - a function that prints a string, in reverse,
 *             followed by a new line
 *
 * @s: pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
