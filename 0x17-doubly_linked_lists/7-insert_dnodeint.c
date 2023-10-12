#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert a new node at give index
 * @h: pointer to head-node of the list
 * @idx: pointer to index where new node is to be added
 * @n: pointer to value to be stored in the new node
 * Return: Address of new node, NULL if fails or if impossible to add new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node, *curr = *h;
	unsigned int u;

	if (!h || (idx > 0 && !curr))
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = curr;
		if (curr)
			curr->prev = n_node;
		*h = n_node;
		return (n_node);
	}

	for (u = 0; u < idx - 1 && curr != NULL; u++)
		curr = curr->next;

	if (curr == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->next = curr->next;
	n_node->prev = curr;
	if (curr->next != NULL)
		curr->next->prev = n_node;
	curr->next = n_node;

	return (n_node);
}
