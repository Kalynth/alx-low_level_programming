#include "lists.h"

/**
  * print_list - Prints all elements in a list
  * @h: head of list
  * Return: Total number of nodes
  */


size_t print_list(const list_t *h)
{
	int z;

	if (h == NULL)
		return (0);

	for (z = 1; h->next != NULL; z++)
	{
		if (h->str == NULL)
			printf("%u %s\n", h->len, "(nil)";
	else
	{
			printf("%u %s\n", h->len, h->str);
	}
		h = h->next;
	}
			printf("%u %s\n", h->len, "(nil)";
		return (z);
}
