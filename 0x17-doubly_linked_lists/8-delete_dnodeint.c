#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index.
 * @head: Address of head pointer.
 * @index: Index to find node in list.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp_next, *temp_prev;

	if (head && *head)
	{
		if (index == 0)
		{
			temp = *head;
			temp_next = (*head)->next;
			temp_prev = (*head)->prev;
			if (temp_prev)
			{
				if (temp_next)
					temp_prev->next = temp_next;
				else
					temp_prev->next = NULL;
			}
			if (temp_next)
				temp_next->prev = temp_prev;
			if (!temp_prev)
				*head = (*head)->next;
			free(temp);
			temp = NULL;
			return (1);
		}
		return (delete_dnodeint_at_index(&(*head)->next, index - 1));
	}
	return (-1);
}
