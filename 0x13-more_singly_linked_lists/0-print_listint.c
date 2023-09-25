#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: defines start of the node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t noden = 0;

	while (h != NULL)

	{
		printf("%d\n", h->n);
		h = h->next;
		noden++;
	}

	return (noden);
}
