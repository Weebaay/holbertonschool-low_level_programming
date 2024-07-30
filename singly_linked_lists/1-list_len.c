#include "lists.h"

/**
 * list_len - that returns the number of elment in a linked list_t
 * @h:Constant pointer to the head of the list
 *
 * Return: number of element in a linked
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
