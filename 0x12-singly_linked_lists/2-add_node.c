#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head node of the list.
 * @str: String to use to initialize the field str in list_t.
 *
 * Return: A pointer to the newly added node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;

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

