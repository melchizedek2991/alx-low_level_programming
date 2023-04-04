#include "lists.h"

/**
 * reverse_listint - Reverses the order of a linked list.
 *
 * @head: Pointer to the head node of the linked list.
 *
 * Return: Pointer to the new head node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
