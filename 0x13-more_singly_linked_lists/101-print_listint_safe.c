#include "lists.h"
#include <stdio.h>

size_t looped_listint_num(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_num - function to get number of unique nodes in
 * a looped linked list
 * @head: first node pointer of the list
 * Return: 0 if not looped or number of unique nodes in the list
 */
size_t looped_listint_num(const listint_t *head)
{
	const listint_t *trail;
	const listint_t *peak;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	trail = head->next;
	peak = (head->next)->next;

	while (peak)
	{
		if (trail == peak)
		{
			trail = head;

			while (trail != peak)
			{
				nodes++;
				trail = trail->next;
				peak = peak->next;
			}

			trail = trail->next;
			while (trail != peak)
			{
				nodes++;
				trail = trail->next;
			}
			return (nodes);
		}
		trail = trail->next;
		peak = (peak->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Function to print a linked list
 * @head: first node pointer of the linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = looped_listint_num(head);
	size_t index = 0;

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (; index < nodes; index++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p}%d\n", (void *)head, head->n);
	}
	return (nodes);
}
