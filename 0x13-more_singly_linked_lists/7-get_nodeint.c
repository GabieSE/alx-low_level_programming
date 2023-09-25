#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of  list
 * @index: node index
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (index != 0)
	{
		temp = temp->next;
		index--;
		if (temp == NULL)
			return (0);
	}

	return (temp);
}
