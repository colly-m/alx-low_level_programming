#include "lists.h"

/**
 * free_listint2 - function to free a list
 * @head: pointer to head address to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
