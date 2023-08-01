#include "lists.h"

/**
 * get_nodeint_at_index - function to return the nth node of a linked list
 * @head: address to first node in a list
 * @index: position of the node
 * Return: node address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int u;

	if (head == NULL)
		return (NULL);

	for (u = 0; u < index; u++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
