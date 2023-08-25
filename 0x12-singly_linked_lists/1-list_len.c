#include "lists.h"

/**
 * list_len - a function that prints all the elements of a list_t list.
 *
 * @h: Array of characters
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
