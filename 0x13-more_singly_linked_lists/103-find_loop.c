#include "lists.h"

/**
 * find_listint_loop - function to find a loop in the linked list
 * @head: first node of the linked list
 * Return: addess of th node or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hind = head;
	listint_t *fore = head;

	if (!head)
	return (NULL);

	while (hind && fore && fore->next)
	{
		fore = fore->next->next;
		hind = hind->next;

		if (fore == hind)
		{
			hind = head;
			while (hind != fore)
			{
				hind = hind->next;
				fore = fore->next;
			}
			return (fore);
		}
	}
	return (NULL);
}
