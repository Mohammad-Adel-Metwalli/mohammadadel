#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i = 0;
	char he[] = "abcdefghijklmnopqrstuvwxyz";
	int size = sizeof(he) - 2;

	while (i <= size)
	{
		putchar(he[size--]);
	}

	putchar('\n');
	return (0);
}
