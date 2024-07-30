#include "lists.h"

/**
 *print_list - that print all element of a list tyoe list_t
 *@h:Constant pointer to the head of the list
 *
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", tmp->len, tmp->str);
		}
		count++;
		tmp = tmp->next;
	}
	return (count);
}
