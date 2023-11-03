#include "hash_tables.h"

/**
 * hash_table_delete - Function to delete a hash table
 * @ht: pointer to hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t z;
	hash_node_t *curr;

	if (ht == NULL)
	{
		return;
	}

	for (z = 0; z < ht->size; z++)
	{
		curr = ht->array[z];
		while (curr != NULL)
		{
			hash_node_t *next = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = next;
		}
	}
	free(ht->array);
	free(ht);

	ht = NULL;
}
