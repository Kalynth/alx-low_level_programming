#include "lists.h"

/**
  * free_listint - Frees a list
  * @head: Acts a pointer
  * Return: Always 0 (Success)
  */

void free_listint(listint_t *head)
{
	listint_t *temporary;

	while ((temporary = head) != NULL)
	{
		head = head->next;
		free(temporary);
	}
}
