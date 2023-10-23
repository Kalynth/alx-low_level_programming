#include "lists.h"
/**
  * free_listint - Frees a list
  * @head: Acts a pointer
  * Return: Always 0 (Success)
  */
void free_listint(listint_t *head);
{
	listint_t *temp;

	while ((temp = head) != '\0')
	{
		head = head->next;
		free(temp);
	}
}
