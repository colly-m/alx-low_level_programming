#include "hash_tables.h"

/**
 * hash_table_set - function to add an item into  the hash table
 * @ht: pointer to a hash table
 * @key: pointer to key of the added item into the hash table
 * @value: pointer to pair value of the key
 * Return: 0 if fails and 1 if succeseeds
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val_cp;
	hash_node_t *n;
	unsigned long int idx, u;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cp = strdup(value);
	if (val_cp == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (u = idx; ht->array[u]; u++)
	{
		if (strcmp(ht->array[u]->key, key) == 0)
		{
			free(ht->array[u]->value);
			ht->array[u]->value = val_cp;
			return (1);
		}
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(val_cp);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = val_cp;
	n->next = ht->array[idx];
	ht->array[idx] = n;

	return (1);
}
