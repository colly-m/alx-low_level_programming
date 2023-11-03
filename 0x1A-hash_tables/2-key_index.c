#include "hash_tables.h"

/**
 * key_index - function to return thee index of a key
 * @key: pointer to the key to get index from
 * @size: pointer to size of the array
 *
 * Description: Uses the djb2 algorithm
 * Return: Index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
