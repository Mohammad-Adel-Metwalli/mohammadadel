#include <stdio.h>
#include "main.h"

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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
