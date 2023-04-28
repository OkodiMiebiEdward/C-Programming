#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node
 * @head: pointer to pointer to list_t
 * @str:string to add
 * Return: address returned
 */
list_t *add_node(list_t **head, const char *str)
{
	/*function adds new node*/
	list_t *res;
	unsigned int val = 0;

	while (str[val])
		val+=1;

	res = malloc(sizeof(list_t));
	if (!res)
		return (NULL);

	res->str = strdup(str);
	res->len = val;
	res->next = (*head);
	(*head) = res;

	return (*head);
}

