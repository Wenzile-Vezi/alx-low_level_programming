#include "lists.h"

/**
 * sum_dlistint - Entry point
 * @head: pointer to the head of the list
 *
 * Description: function that returns the sum of all the data of a linked list.
 * Return: sum of all nodes or if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	long int add;
	dlistint_t *temp;

	add = 0;
	if (head == NULL)
	return (add);

	temp = head;
	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}
	return (add);
}
