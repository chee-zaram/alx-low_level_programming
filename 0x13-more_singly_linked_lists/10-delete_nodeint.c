#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index.
 * @head: Address of the head pointer.
 * @index: Index at which node to be deleted can be found.
 *
 * Return: 1 if successfully deleted, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	int ret = FAIL;

	if (head && *head)
	{
		if (index > 0)
		{
			ret = delete_nodeint_at_index(&tmp->next, index - 1);
			return (ret);
		}
		else
		{
			tmp = tmp->next;
			free(*head);
			*head = tmp;
			return (PASS);
		}
	}
	return (ret);
}

