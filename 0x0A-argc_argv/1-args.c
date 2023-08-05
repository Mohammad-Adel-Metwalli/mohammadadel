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
int main(int argc __attribute__((unused)), char *argv[]__attribute((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
