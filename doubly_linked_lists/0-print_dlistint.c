#include "lists.h"

/**
 * print_dlistint - that prints all the elements of a dlistint_t list
 * @h: poiteur to head of list
 *
 * Return: number element of a list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}