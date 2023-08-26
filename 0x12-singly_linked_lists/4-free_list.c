#include "lists.h"

/**
  * free_list - Frees a list
  * @head: Points to the first node
  */
void free_list(list_t *head)
{
	list_t *temporary_space;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temporary_space = head->next;
		free(head->str);
		free(head);
		head = temporary_space;
	}
	free(head->str);
	free(head);
}
