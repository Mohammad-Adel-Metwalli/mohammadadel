#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: array of integers
 * @size: size of an array
 * @cmp: function pointer
 *
 * Return: index (Success), -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
