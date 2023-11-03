#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table of specified size
 *
 * @size: pointer to size of the array
 * Return: a newly created hast table or NULL in failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_table = NULL;
	unsigned long int u;

	if (size < 1)
	{
		return (NULL);
	}

	n_table = (hash_table_t *)malloc(sizeof(hash_node_t *) * size);
	if (n_table == NULL)
	{
		return (NULL);
	}

	n_table->size = size;
	n_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (n_table->array == NULL)
	{
		free(n_table);
		return (NULL);
	}

	for (u = 0; u < size; u++)
	{
		n_table->array[u] = NULL;
	}
	return (n_table);
}
