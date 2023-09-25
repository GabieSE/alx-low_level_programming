#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of  list
 * @idx: index to insert the node
 * @n: new node
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *noden;

	if (head == NULL)
		return (0);

	temp = *head;

	idx--;
	while (idx != 0)
	{
		temp = temp->next;
		idx--;
		if (temp == NULL)
			return (NULL);
	}
	noden = malloc(sizeof(listint_t));
	noden->n = n;
	noden->next = temp->next;
	temp->next = noden;

	return (temp);
}
