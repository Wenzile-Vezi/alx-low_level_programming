#include "lists.h"

/**
 * free_dlistint - Entry point
 * @head: pointer to the head of the list.
 *
 * Description: unction that frees a dlistint_t list.
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
