#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - It reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the temp
 * @new: new node to add to the list
 *
 * Return: A pointer to the temp
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **temp;
	size_t i;

	temp = malloc(size * sizeof(listint_t *));
	if (temp == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		temp[i] = list[i];
	temp[i] = new;
	free(list);
	return (temp);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: a pointer to the start of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **newnode = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == newnode[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(newnode);
				return (num);
			}
		}
		num++;
		newnode = _r(newnode, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(newnode);
	return (num);
}
