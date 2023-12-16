#include "lists.h"

/**
 * dlistint_len - Entry point
 * @h: pointer to head of the list
 *
 * Description: that returns the number of elements in a linked dlistint_t list
 * Return: number of nodes on the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
	return (size);

	while (h)
	{
		++size;
		h = h->next;
	}
	return (size);
}
