#include "lists.h"

/**
  * sum_listint - Sums all the data of a list
  * @head: Acts as a pointer
  * Return: all sums of the data of the list, if empty, return 0
  */
int sum_listint(listint_t *head)
{
	int k;

	k = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		k += head->n;
		head = head->next;
	}
	return (k);
}
