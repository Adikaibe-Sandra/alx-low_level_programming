#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t list
 * @head: A pointer to the address of the head of the list_t list
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	if (!head)
		return (NULL);

	prev_node = NULL;
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
