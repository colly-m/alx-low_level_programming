#include "lists.h"

/**
 * reverse_listint - function to reverse a linked list
 * @head: a pointer to first node of the linked ist
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = next;
	}
	*head = prv;
	return (*head);
}
