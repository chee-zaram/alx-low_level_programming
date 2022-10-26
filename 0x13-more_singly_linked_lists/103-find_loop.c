#include "lists.h"

/**
 * find_listint_loop - Finds the loop in listint_t linked list.
 * @head: Pointer to head node of the list.
 *
 * Return: Pointer to the start of the loop. NULL if non exists.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ahead = head, *behind = head, *other_meet = head;

	while (behind && ahead && ahead->next)
	{
		behind = behind->next;
		ahead = ahead->next->next;
		if (behind == ahead)
		{
			while (behind != other_meet)
			{
				behind = behind->next;
				other_meet = other_meet->next;
			}
			return (behind);
		}
	}
	return (NULL);
}

