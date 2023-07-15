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

	int i, j, k;

	i = j = k = 48;

	while (k < 58)
	{
		i = k + 1;
		while (i < 58)
		{

			j = i + 1;
			while (j < 58)
			{
				putchar(k);
				putchar(i);
				putchar(j);

				if (!(k == 55 && i == 56 && j == 57))
				{
					putchar(44);
					putchar(32);
				}
				j++;
			}
			i++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
