#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert a new node
 * at a given position
 * @head: first address of the list
 * @idx: position to add the new node in the list
 * @n: data to include in the new node
 * Return: address of new node or NULL If fals
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int u = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx != 0)
	{
		tmp = *head;
		for (; u < idx - 1 && tmp != NULL; u++)
			tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
