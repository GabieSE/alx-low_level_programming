#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - A function that
 * finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cheese, *mozarella;

	cheese = mozarella = head;
	while (cheese && mozarella && mozarella->next)
	{
		cheese = cheese->next;
		mozarella = mozarella->next->next;
		if (cheese == mozarella)
		{
			cheese = head;
			break;
		}
	}
	if (!cheese || !mozarella || !mozarella->next)
		return (NULL);
	while (cheese != mozarella)
	{
		cheese = cheese->next;
		mozarella = mozarella->next;
	}
	return (mozarella);
}
