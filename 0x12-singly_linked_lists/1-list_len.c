#include "lists.h"
/**
  * list_len - Length of a list.
  * @h: Points to the first node.
  * Return: number of elements in a list
  */

size_t list_len(const list_t *h)
{
	int j;

	if (h == NULL)
		return (0);
	for (j = 1; h->next != NULL; j++)
		h = h->next;
		return (j);
}
