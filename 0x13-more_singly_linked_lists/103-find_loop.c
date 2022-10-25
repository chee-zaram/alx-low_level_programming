#include "lists.h"

/**
 * find_listint_loop - Finds the loop in listint_t linked list.
 * @head: Pointer to head node of the list.
 *
 * Return: Pointer to the start of the loop. NULL if non exists.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop = head;

	if (head)
	{
		if (head > head->next)
			loop = find_listint_loop(head->next);
		else
			return (head->next);
		return (loop);
	}
	return (NULL);
}

