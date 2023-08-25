#include "lists.h"


int len(const char *str);
/**
  * add_node_end - adds nodes to the end of list
  * @head: Points to the first node
  * @str: node to be added at the end of list
  * Return: The address of new element, or NULL if it fails
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cake_node;
	list_t *jod;

	jod = *head;

	if (head == NULL);
	{
		return (NULL);
	}
	cake_node = create_nod(str);

	if (cake_nod == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = cake_nod;
		return (*head);
	}
	while (jod->next != NULL)
	jod = jod->next
	jod->next = cake_node;
	return (*head);
}
/**
 * create_node - creates a node
 * @str: String to be added in the new node.
 * Return: Points to the memory.
 */
list_t *create_node(const char *str)
{
	list_t *cake_node;
	cake_node = malloc(sizeof(list_t));
	if (cake_node == NULL)
		return (NULL);

	cake_node->str = strdup(str);
	cake_node->len = len(str);
	cake_node->next = NULL;
}
/**
  * len - length of a string
  * @str: the length of the  string to be found
  * Return: Length of string 
  */
int len(const char *str);
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
