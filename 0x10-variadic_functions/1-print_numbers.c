#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 *
 * @separator: string sep
 * @n: number of integers
 *
 * Return: print of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return;

	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	}
	printf("%d", va_arg(args, int));
	printf("\n");
	va_end(args);
}
