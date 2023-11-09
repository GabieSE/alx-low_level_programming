#include "lists.h"

/**
 * delete_dnodeint_at_index - a func deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hd1;
	dlistint_t *hd2;
	unsigned int i;

	hd1 = *head;

	if (hd1 != NULL)
		while (hd1->prev != NULL)
			hd1 = hd1->prev;

	i = 0;

	while (hd1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = hd1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hd2->next = hd1->next;

					hd1->next->prev = hd2;
			}

			free(hd1);
			return (1);
		}
		hd2 = hd1;
		hd1 = hd1->next;
		i++;
	}

	return (-1);
}
