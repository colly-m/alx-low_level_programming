#include "lists.h"

/**
 * pop_listint - functionto delete head node of a linked list
 * @head: the header pointer
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
