#include "lists.h"

/**
 * add_dnodeint - function to add a new node at the beginning of a dlistint_t
 * list
 * @head: pointer to head-node of the list
 * @n: pointer to value to be stored in new node
 * Return: Address of new element, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = n_node;
	}

	*head = n_node;

	return (n_node);
}
