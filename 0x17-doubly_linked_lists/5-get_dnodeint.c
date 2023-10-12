#include "lists.h"

/**
 * get_dnodeint_at_index - function to return the nth node of a dlistint_t list
 * @head: pointer to head-node of the list
 * @index: pointer to the position to add to in the list
 * Return: nth node, NULL if no existance
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;

	while (curr != NULL && index > 0)
	{
		curr = curr->next;
		index--;
	}

	return (curr);
}
