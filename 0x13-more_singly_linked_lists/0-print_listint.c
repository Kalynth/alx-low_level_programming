#include "lists.h"
/**
 * print_listint - Prints all elements of a list
 * @h: Acts a pointer to the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t tally;

	if (h == NULL)
		return (0);

	for (tally = 0; h != NULL; tally++)
	{
		printf("The number of nodes:%d\n", h->n);
		h = h->next;
	}
	return (tally);
}
