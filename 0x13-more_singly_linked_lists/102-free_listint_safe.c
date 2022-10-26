#include "lists.h"

/**
 * free_listint_safe - Frees the listint_t list safely and sets h to NULL.
 * @h: Address of the h pointer.
 *
 * Return: The size of the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *beg = *h, *ahead = *h, *b_hold, *start;
	size_t size = 0, null = 0, sub_size = 0;

	while (*h)
	{
		if (ahead && ahead->next)
			ahead = ahead->next->next;
		size++, b_hold = (*h)->next;
		*h = b_hold;
		if (*h == ahead && *h)
		{
			sub_size = size;
			start = loop_start(b_hold, beg);
			while (*h != start)
			{
				b_hold = (*h)->next, free(*h);
				*h = b_hold, size++;
			}
			*h = beg;
			while (sub_size)
			{
				b_hold = (*h)->next, free(*h);
				*h = b_hold, sub_size--;
			}
			break;
		}
		else if (!*h)
		{
			while (beg)
			{
				null++;
				b_hold = beg->next;
				free(beg);
				beg = b_hold;
			}
		}
	}
	*h = NULL;
	return (size);
}

/**
 * loop_start - Finds the start of the loop in the listint_t list.
 * @meet: Pointer to current node in the list.
 * @head: Pointer to start of the list.
 *
 * Return: Returns a pointer to the start of the loop.
 */
listint_t *loop_start(listint_t *meet, listint_t *head)
{
	listint_t *other_meet = head;

	if (meet != other_meet)
		meet = loop_start(meet->next, other_meet->next);
	return (meet);
}

