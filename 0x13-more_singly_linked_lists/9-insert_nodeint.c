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
	listint_t *new;

	if (*head)
	{
		if (idx > 0)
		{
			n_node = insert_nodeint_at_index(&(*head)->next, idx - 1, n);
			return (n_node);
		}
		else
		{
			new =  malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = *head;
			*head = new;
			return (*head);
		}
	}
	return (NULL);
}

