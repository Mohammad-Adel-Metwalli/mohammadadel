#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 *                        of a listint_t linked list.
 *
 * @head: first node
 * @index: index of a node (0 indexing)
 *
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
