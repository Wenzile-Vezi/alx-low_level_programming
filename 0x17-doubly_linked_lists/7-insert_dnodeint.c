#include "lists.h"

/**
 * insert_node - Entry point
 * @temp: ptr to nth position node in doubly linked list
 * @n: node data
 *
 * Description: insert a node at given index
 * Return: address of inserted node
 */
dlistint_t *insert_node(dlistint_t *temp, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;

	new->next = temp;
	new->prev = temp->prev;
	temp->prev->next = new;
	temp->prev = new;

	return (new);
}

/**
 * insert_dnodeint_at_index - Entry point
 * @h: pointer to the head of the list.
 * @idx: index to add new node, starts from 0.
 * @n: value of the new node.
 *
 * Description: function that inserts a new node at a given position.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!h)
		return (NULL);

	temp = *h;
	while ((idx != 0) && (temp->next))
	{
		idx -= 1;
		temp = temp->next;
		if (idx == 0)
			return (insert_node(temp, n));
	}

	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
