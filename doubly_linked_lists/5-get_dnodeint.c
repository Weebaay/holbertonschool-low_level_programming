#include "lists.h"

/**
 * get_dnodeint_at_index - that return nth node of a dlistint_t linked list
 * @head:pointer to the head of a linked list
 * @index: index of the node
 *
 * Return: nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	while (tmp != NULL)
	{
		if (count == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
