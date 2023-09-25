#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: head of the list
 * Return:  returns the head node’s data (n)
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int i;

	if (head == NULL)
		return (0);

	temp = *head;

	if (temp == NULL)
		return (0);

	i = temp->n;
	*head = temp->next;

	free(temp);
	return (i);
}
