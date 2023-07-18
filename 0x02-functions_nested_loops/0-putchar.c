#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'Code for print putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char word[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
