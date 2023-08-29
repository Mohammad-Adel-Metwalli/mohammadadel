#include "lists.h"

/**
 * listint_len - a function that return number of the elements
 *
 * @h: pointer to the first node
 *
 * Return: number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/*if h not equal null*/
	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);

}
