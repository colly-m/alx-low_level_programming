#include "lists.h"

/**
 * listint_len - function to return number of elements in a linked list
 * @h: the pointer head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	for (; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}
