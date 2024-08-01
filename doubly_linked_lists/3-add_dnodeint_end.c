#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Integer value for the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node;
	dlistint_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}

	last_node = malloc(sizeof(dlistint_t));
	if (last_node == NULL)
	{
		return (NULL);
	}
	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		last_node->prev = NULL;
		*head = last_node;
		return (last_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = last_node;
	last_node->prev = tmp;
	return (last_node);
}
