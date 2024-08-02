#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * of a dlistint_t linked list
 * @head: Double pointer to the head of the list
 * @index: Index of the node to be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	for (i = 0; tmp != NULL && i < index; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		return (-1);
	}

	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
	}

	if (tmp->prev != NULL)
	{
		tmp->prev->next = tmp->next;
	}

	free(tmp);

	return (1);
}
