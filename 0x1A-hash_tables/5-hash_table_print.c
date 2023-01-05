#include "hash_tables.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tempNode = NULL;
	bool started = false;

	if (!ht || !ht->array)
		return;

	printf("{");
	while (i < ht->size)
	{
		tempNode = ht->array[i];
		while (tempNode)
		{
			if (started)
				printf(", ");
			printf("'%s': '%s'", tempNode->key, tempNode->value);
			started = true;
			tempNode = tempNode->next;
		}
		i++;
	}
	printf("}\n");
}
