#include "hash_tables.h"

/**
 * hash_table_print - function to print all contents in a hash table
 * @ht: pointer to the hash table to print from
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int u;
	unsigned char u_c = 0;
	hash_node_t *nd;

	if (ht == NULL)
		return;

	printf("{");

	for (u = 0; u < ht->size; u++)
	{
		if (ht->array[u] != NULL)
		{
			if (u_c == 1)
				printf(", ");

			nd = ht->array[u];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			u_c = 1;
		}
	}
	printf("}\n");
}
