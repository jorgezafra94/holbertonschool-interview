#include "lists.h"
/**
 * add_nodeint_start - create a queue linked_list
 * @head: pinter to linked list
 * @n: value to store
 * Return: new element or NULL
 */
listint_t *add_nodeint_start(listint_t **head, int n)
{
	listint_t *new;


	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
/**
 * reverse - is a copy of head linked_list
 * @head: liked list to copy
 * @rev: variable to store the reversed linked list
 * Return: nothing
 */
void reverse(listint_t **head, listint_t **rev)
{
	while (*head)
	{
		add_nodeint_start(rev, (*head)->n);
		*head = (*head)->next;
	}
}

/**
 * is_palindrome - function that says if a linked_list is palidrome or not
 * @head: pointer to the head of the linked_list
 * Return: 1 if the linked list is palindrome or 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *aux, *rev, *revaux;

	if (!(*head))
		return (1);

	rev = NULL;
	aux = *head;
	reverse(head, &rev);
	revaux = rev;
	while (aux)
	{
		if (aux->n != rev->n)
		{
			free_listint(revaux);
			return (0);
		}
		aux = aux->next;
		rev = rev->next;
	}
	free_listint(revaux);
	return (1);
}
