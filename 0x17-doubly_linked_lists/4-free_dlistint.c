#include "lists.h"

/**
 * free_dlistint - a func that frees a dlistint_t list
 *
 * @head: head of the list
 * Return: nothing to be returned
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
