#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at a given position.
 * @head: Address of the head pointer.
 * @idx: Index at which to insert node.
 * @n: Integer to initialize node data.
 *
 * Return: Pointer to the newly created node.
 * NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node;

	if (head && *head)
	{
		if (idx > 0)
		{
			n_node = insert_nodeint_at_index(&(*head)->next, idx - 1, n);
			return (n_node);
		}
		else
		{
			return (insert(&(*head), n));
		}
	}
	else if (head && !*head && idx == 0)
	{
		return (insert(&(*head), n));
	}

	return (NULL);
}

/**
 * insert - Insert a new node where called.
 * @head: Position to insert new node.
 * @n: Initializer for n data in node.
 *
 * Return: Pointer to the new node.
 */
listint_t *insert(listint_t **head, int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

