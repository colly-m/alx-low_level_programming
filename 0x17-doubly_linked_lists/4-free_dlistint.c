#include "lists.h"

/**
 * free_dlistint - function to free a dlistint_t list
 * @head: pointer to head-node of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
