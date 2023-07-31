#include "lists.h"

/**
 * add_nodeint_end - function to add a new node at the end of a list
 * @head: the header pointer
 * @n: int data type
 * Return: address of new element or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else
	{
		new = *head;
		while (new->next != NULL)
			new = new->next;
		new->next = temp;
	}
	return (temp);
}
