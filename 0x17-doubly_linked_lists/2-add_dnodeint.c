#include "lists.h"

/**
 * add_dnodeint - Entry point
 * @head: pointer to head pointer of the list
 * @n: value of the new node.
 *
 * Description: function that adds a new node at the beginning of a list.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;

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

	(*head)->prev = a;
	a->next = *head;
	*head = a;
	return (a);
}
