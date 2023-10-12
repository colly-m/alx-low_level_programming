#include "lists.h"

/**
 * sum_dlistint - function to return sum of all nth data of a dlistint_t
 * @head: pointer toi headnod of the list
 * Return: sum of the data, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int plus = 0;

	while (head != NULL)
	{
		plus += head->n;
		head = head->next;
	}

	return (plus);
}
