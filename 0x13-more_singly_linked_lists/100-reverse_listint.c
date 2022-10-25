#include "lists.h"

/**
 * reverse_listint - Reverses the order of nodes in the listint_t list.
 * @head: Address of the head pointer.
 *
 * Return: Pointer to first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;
	listint_t *tmp_head;

	if (head && *head && (*head)->next)
	{
		curr = *head;
		*head = (*head)->next;
		if ((*head)->next)
		{
			tmp_head = *head;
			reverse_listint(head);
			tmp_head->next = curr;
		}
		else
		{
			(*head)->next = curr;
		}
		curr->next = NULL;
		return (*head);
	}
	else if (head && *head)
	{
		return (*head);
	}
	return (NULL);
}

