#include "hash_tables.h"

/**
 * hash_table_delete - Function to delete a hash table
 * @ht: pointer to hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t z;
	hash_node_t *curr, *nd;

	for (z = 0; z < ht->size; z++)
	{
		if (ht->array[z] != NULL)
		{
			nd = ht->array[z];
			while (nd != NULL)
			{
				curr = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = curr;
			}
		}
	}
	free(ht->array);
	free(ht);
}
