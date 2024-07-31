#include "lists.h"


/**
 * _strdup - duplicate a string
 * @str: The string to duplicate
 *
 * Return: pointer to duplicate string , or NULL
 */

char *_strdup(const char *str)
{
	char *tp;
	size_t len = 0;
	size_t i;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
		len++;
	tp = malloc((len + 1) * sizeof(char));
	if (tp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		tp[i] = str[i];
	}
	return (tp);
}
/**
 * add_node - tha add new node at the beginninng of a list
 * @head: pointeer to the head of a list
 * @str: the string to be add of a list
 *
 * Return: the adress of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *one_node = (list_t *)malloc(sizeof(list_t));

	if (one_node == NULL)
	{
		return (NULL);
	}
	one_node->str = _strdup(str);
	if (one_node->str == NULL)
	{
		free(one_node);
		return (NULL);
	}
	one_node->next = *head;
	*head = one_node;

	return (one_node);
}
