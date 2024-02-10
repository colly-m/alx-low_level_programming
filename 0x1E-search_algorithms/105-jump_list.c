#include "search_algos.h"

/**
 * jump_list - Function to search for a value in a sorted list
 * of integers using jump search algorithm
 * @list: pointer to the head of the list
 * @size: pointer to the number of nodes in list
 * @value: pointer to the value to search
 * Return: NULL if value not present, or pointer to the first node index
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t lmt = 0;
	listint_t *lw = NULL, *up = NULL;

	if (list != NULL)
	{
		lw = list;
		up = list;

		while (up->next != NULL && up->idex < size && high->n < value)
		{
			lw = high;
			lmt += sqrt(size);
			while (up->index < lmt && up->next != NULL)
				up = up->next;
			printf("Value checked at index [%lu] = [%d]\n", up->index, up->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       lw->index, up->index);
		while (lw != NULL && lw->index < size && lw->index <= up->index)
		{
			printf("Value checked at index [%lu] = [%d]\n", lw->index, lw->n);
			if (lw->n == value)
				return (lw);
			lw = lw->next;
		}
	}
	return (NULL);

}
