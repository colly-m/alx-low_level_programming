#include "lists.h"

/**
 * add_nodeint - function to add a new node at the begining of a node list
 * @head: ther head pointer
 * @n: int data type
 * Return: address of new element or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
