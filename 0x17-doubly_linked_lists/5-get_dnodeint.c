#include "lists.h"

/**
 * get_dnodeint_at_index - Entry point
 * @head: pointer to the head of the list
 * @index: the index of the node to search from, starts from 0.
 *
 * Description: function that returns the nth node of a dlistint_t linked list.
 * Return: nth of node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *temp;

	size = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
		if (index == size)
		return (temp);
		++size;
		temp = temp->next;
	}
	return (NULL);
}
