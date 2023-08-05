#include <stdlib.h>
#include <stdio.h>
#include "main.h"


int _isdigit(int c);

/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: values of arguments
 *
 * Return: 0 On success
 */
int main(int argc, char *argv[])
{
	int i, k, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			k = _isdigit(argv[i][0]);
			if (k)
			{
				if (k >= 0)
					sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}

/**
 * _isdigit - check if the input is digit or not
 *
 * @c: checks input of function
 *
 * Return: 1 if 'c' is digit
 * else return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
