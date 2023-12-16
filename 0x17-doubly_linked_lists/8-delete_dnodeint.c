#include "lists.h"

/**
 * delete_dnodeint_at_index - Entry point
 * @head: pointer to the head of the list
 * @index: index to delete from, starts from 0.
 *
 * Description: function that deletes the node at givem index.
 * Return: 1 on Success or -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int add;
	dlistint_t *temp;

	if (*head == NULL || head == NULL)
	return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp), temp = NULL;
		return (1);
	}
	add = 1, temp = (*head)->next;
	if (temp)
	{
		while (temp->next)
		{
			if (index == add)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				free(temp), temp = NULL;
				return (1);
			}
			++add, temp = temp->next;
		}
	}
	if (temp && index == add)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	return (-1);
}
