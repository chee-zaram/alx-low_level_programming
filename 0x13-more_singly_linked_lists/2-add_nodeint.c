#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a listint_t list.
 * @head: Address of the head pointer.
 * @n: Value with which to initialize the node data.
 *
 * Return: Pointer to the newly created node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}

