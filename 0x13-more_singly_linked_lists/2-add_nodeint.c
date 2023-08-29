#include "lists.h"
/**
  * *add_nodeint - Adds a new node at the beginning of a list
  * @n: integer
  * Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cake_node;

	if (head == NULL)
		return (0);

	cake_node = malloc(sizeof(listint_t));
	if (cake_node == NULL)
		return (NULL);

	if (*head == NULL)
		cake_node->next = NULL;
	else
		cake_node->next = *head;
	cake_node->n = n;
	*head = cake_node;

	return (*head);
}
