#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 *          beginning of a listint_t list.
 *
 * @head: pointer to the first node
 * @n: number to add
 *
 * Return: address of new head, NULL otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	/* failed to allocate memory to the new node*/
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}
