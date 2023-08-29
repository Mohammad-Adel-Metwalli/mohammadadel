#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to the first node in the list
 * @n: number to add
 *
 * Return: address of new head, NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = (*head);

	/*failed to allocate memory to the new node*/
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (!(*head))
	{
		(*head) = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}

