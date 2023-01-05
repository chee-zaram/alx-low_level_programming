#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes the hash table
 * @ht: Pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **arrayOfItems, *tempItem;
	unsigned long int index = 0;

	if (!ht)
		return;

	if (!ht->array)
	{
		free(ht), ht = NULL;
		return;
	}

	arrayOfItems = ht->array;
	while (index < ht->size)
	{
		while (arrayOfItems[index])
		{
			free(arrayOfItems[index]->key);
			arrayOfItems[index]->key = NULL;

			free(arrayOfItems[index]->value);
			arrayOfItems[index]->value = NULL;

			tempItem = arrayOfItems[index]->next;
			free(arrayOfItems[index]);
			arrayOfItems[index] = NULL;
			arrayOfItems[index] = tempItem;
		}
		index++;
	}

	free(arrayOfItems), arrayOfItems = NULL;
	free(ht), ht = NULL;
}
