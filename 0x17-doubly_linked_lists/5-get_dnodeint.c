#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a dlistint_t linked list.
 * @head: Head pointer.
 * @index: Index of node in list.
 *
 * Return: Pointer to nth node, or NULL if node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head)
	{
		if (index == 0)
			return (head);
		return (get_dnodeint_at_index(head->next, index - 1));
	}
	return (NULL);
}
