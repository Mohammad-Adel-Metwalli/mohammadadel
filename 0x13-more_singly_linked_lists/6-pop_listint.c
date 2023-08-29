#include "lists.h"

/**
 * pop_listint -  a function that deletes the head node of a listint_t
 *                linked list, and returns the head node’s data (n).
 *
 * @head: pointer to the first element
 *
 * Return: number inside the deleted node
 */

int pop_listint(listint_t **head)
{
	listint *temp;
	int popedNumber;

	if (!head)
		return (0);

	if (!*head)
		return (0);

	popedNumber = (*head)->n;
	temp = (*head)->next;
	free(*head);
	(*head) = temp;

	return (popedNumber);
}
