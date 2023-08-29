#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: pointer to the first element of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	/* to iterate over the elements of the list*/
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
