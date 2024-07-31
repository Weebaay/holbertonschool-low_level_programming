#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: The head of the list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current, *new_node;

	current = head;
	while (current != NULL)
	{
		new_node = current->next;
		free(current->str);
		free(current);
		current = new_node;
	}
}
