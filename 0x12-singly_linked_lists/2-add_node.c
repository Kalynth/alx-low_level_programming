#include "lists.h"

int len(const char *str);
list_t *add_node(list_t **head, const char *str);

/**
  * add_node - adds a node to the beginning of the list
  * @head: Points to the head of the list
  * @str: String to be duplicated
  * Return: The address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *cake_node;

	if (head == NULL)
		return (NULL);
	cake_node = malloc(sizeof(list_t));
	if (cake_node == NULL)
		return (NULL);

	if (*head == NULL)
		cake_node->next = NULL;
	else
			cake_node->next = *head;
		cake_node->str = strdup(str);
		cake_node->len = len(str);
		*head = cake_node;
	return (*head);
}

/**
  * len - length of a string
  * @str: the length of the  string to be found
  * Return: Length of string
  */
int len(const char *str)
{
	int j;

	if (str == NULL)
		return (0);

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}
