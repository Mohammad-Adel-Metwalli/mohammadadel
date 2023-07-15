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
	char he[] = "abcdfghijklmnoprstuvwxyz";
	int size = sizeof(he);

	while (i < (size - 1))
	{
		putchar(he[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
