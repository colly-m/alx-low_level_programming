#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table of specified size
 *
 * @size: pointer to size of the array
 * Return: a newly created hast table or NULL in failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_table;
	unsigned long int u;

	n_table = malloc(sizeof(hash_table_t));
	if (n_table == NULL)
	{
		return (NULL);
	}

	n_table->size = size;
	n_table->array = malloc(sizeof(hash_node_t *) * size);
	if (n_table->array == NULL)
	{
		return (NULL);
	}

	for (u = 0; u < size; u++)
	{
		n_table->array[u] = NULL;
	}
	return (n_table);
}
