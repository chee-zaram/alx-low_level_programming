#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a list_t list.
 * @head: Pointer to a pointer to the head node in the list.
 * @str: String to initialize str field in structure.
 *
 * Return: Pointer to the start node in the list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *prevlast;
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}

	for (prevlast = *head; prevlast; prevlast = prevlast->next)
		if (!prevlast->next)
		{
			prevlast->next = new;
			break;
		}
	return (*head);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: String to count.
 *
 * Return: Length of the string.
 */
unsigned int _strlen(const char *str)
{
	if (!*str)
		return (0);
	return (1 + _strlen(str + 1));
}

