#include "lists.h"

/**
 *dlistint_len- that return the number of elements in a linked dlistint_t list
 * @h: pointeur of head to list
 *
 * Return number of elments in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *head = h;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
