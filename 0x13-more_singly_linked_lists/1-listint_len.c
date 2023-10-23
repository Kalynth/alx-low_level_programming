#include "lists.h"
/**
  * listint_len - counts number of elements
  * @h: Points to the list
  * Return: Number of elements in the list
  */
size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
