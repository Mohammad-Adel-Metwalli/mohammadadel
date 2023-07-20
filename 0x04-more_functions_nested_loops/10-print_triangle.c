#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *
 * @size: size of the triangle
 *
 * Return: 0 (Success)
 */
void print_triangle(int size)
{
	int i, j;


		for (int i = 0; i <= size; ++i)
		{
			for (int j = size; j > 0; --j)
			{
				if (i == 0)
					continue;
				if (i >= j)
					_putchar('#');
				else
					_putchar(' ');
			}
			if (i == 0)
				continue;
			_putchar('\n');
		}
}
