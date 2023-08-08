#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 *                and initializes it with a specific char.
 * @size: size of an array
 * @c: character
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ar = (char *) malloc(sizeof(char) * size);

	if (ar == NULL)
		/** there is enough memory */
		return (0);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}

	ar[i] = '\0';

	return (ar);
}
