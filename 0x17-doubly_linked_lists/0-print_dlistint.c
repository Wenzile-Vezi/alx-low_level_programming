#include "lists.h"

/**
 * print_dlistint - Entry point
 * @h: pointer to head of the list
 *
 * Description: a function that prints all the elements of a dlistint_t list.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
	return (size);

	while (h)
	{
		printf("%d\n", h->n);
		++size;
		h = h->next;
	}
	return (size);
}
