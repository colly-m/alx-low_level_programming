#include "lists.h"

/**
 * add_dnodeint_end - dfunction to add a new node at end of the list
 * @head: pointer to the first node
 * @n: pointer to value to be stored in new node
 * Return: Address of new element, NULL if fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *curr;

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}

	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}

	curr->next = n_node;
	n_node->prev = curr;

	return (n_node);
}
