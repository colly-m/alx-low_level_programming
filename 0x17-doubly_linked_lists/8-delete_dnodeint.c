#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete a node at index of a list
 * @head: pointer to head node of the list
 * @index: pointer to index of the node to delete
 * Return: 1 if successfull, -1 if falis
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	dlistint_t *prev = NULL;
	unsigned int u = 0;

	if (*head == NULL)
		return (-1);

	for (; u < index; u++)
	{
		prev = curr;
		curr = curr->next;

		if (curr == NULL)
			return (-1);
	}

	if (index == 0)
	{
		*head = curr->next;
	}
	else
	{
		prev->next = curr->next;
	}

	if (curr->next != NULL)
	{
		curr->next->prev = prev;
	}

	free(curr);

	return (1);
}
