#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - finds length
 * @str: string to find length
 *
 * Return: length
 */

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

/**
 * add_node - adds a new node at the beginning
 * @head: pointer to linked list
 * @str: string to add
 *
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = _strlen(temp->str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
