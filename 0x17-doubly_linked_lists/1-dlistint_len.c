#include "lists.h"

/**
 * dlistint_len - function to return number of elements in a linked list
 * @h: pointer to headnode
 * Return: Number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
