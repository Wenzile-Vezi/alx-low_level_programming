#include "lists.h"

/**
 * add_dnodeint_end - Entry point
 * @head: pointer to head pointer of the list
 * @n: value of the new node.
 *
 * Description: function that adds a new node at the end of a dlistint_t list.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a, *temp;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
	return (NULL);
	a->n = n;
	a->prev = NULL;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	if ((*head)->next == NULL)
	{
		(*head)->next = a;
		a->prev = *head;
		return (a);
	}

	temp = *head;
	while (temp->next)
	temp = temp->next;
	temp->next = a;
	a->prev = temp;
	return (a);
}
