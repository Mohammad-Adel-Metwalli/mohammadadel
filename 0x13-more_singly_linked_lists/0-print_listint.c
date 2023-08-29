#include "lists.h"

/**
 * print_listint - a function that prints all the elements
 *                 of a listint_t list.
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
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);

}
