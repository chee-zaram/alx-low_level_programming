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

	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count = 1;
		if (head > head->next)
			count += print_listint_safe(head->next);
		else
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		return (count);
	}
	return (0);
}

