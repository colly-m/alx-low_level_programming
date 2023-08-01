#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete the node at index of a list
 * @head: head node of list
 * @index: position of thenode to delete in the list
 * Return: 1 if success or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int u;
	listint_t *current = NULL;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (u = 0; u < (index - 1); u++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}
	current = tmp->next;
	tmp->next = current->next;
	free(current);
	return (1);
}
