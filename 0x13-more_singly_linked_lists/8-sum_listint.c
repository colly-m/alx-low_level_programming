#include "lists.h"

/**
 * sum_listint - function to return the sum of all data of a linked list
 * @head: pointer to first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
