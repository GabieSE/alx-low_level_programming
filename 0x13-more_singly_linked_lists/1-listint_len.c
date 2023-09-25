#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list
 *
 * @h: defines the head of the node
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t noden = 0;

	while (h != NULL)
	{
		h = h->next;
		noden++;
	}

	return (noden);
}
