#include "lists.h"

/**
 * print_listint_safe - Prints the elements of the listint_t linked list.
 * @head: Pointer to the first node.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *ahead = head, *behind = head, *start;

	while (behind)
	{
		count++;
		printf("[%p] %d\n", (void *)behind, behind->n);
		if (ahead != NULL && ahead->next != NULL)
			ahead = ahead->next->next;
		behind = behind->next;
		if (behind == ahead && behind != NULL)
		{
			start = find_loop_print(behind, head);
			if (!start)
				continue;
			while (behind != start)
			{
				printf("[%p] %d\n", (void *)behind, behind->n);
				behind = behind->next;
				count++;
			}
			printf("-> [%p] %d\n", (void *)behind, behind->n);
			return (count);
		}
	}
	return (count);
}

/**
 * find_loop_print - Finds the start of the loop for the print function.
 * @meet: Pointer to the node where the loop starts.
 * @head: Pointer to the start of the list.
 *
 * Return: Pointer to the node where the loop starts.
 */
const listint_t *find_loop_print(const listint_t *meet, const listint_t *head)
{
	const listint_t *other_meet = head;

	if (meet == NULL)
		return (NULL);
	if (meet != other_meet)
		meet = find_loop_print(meet->next, other_meet->next);
	return (meet);
}

