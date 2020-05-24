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
void reverse(listint_t *head, listint_t **rev)
{
	while (head)
	{
		add_nodeint_start(rev, (head)->n);
		head = (head)->next;
	}
}

/**
 * recursion - function that realize the comparison
 * @begin: original linked_list
 * @fin: actual point of the linked_list
 * Return: 1 if the comparison is equal 0 if not
 */
int recursion(listint_t *begin, listint_t *fin)
{
	int aux;


	if (!fin)
		return (1);
	aux = recursion(begin->next, fin->next);
	if (aux != 0)
	{
		if (begin->n != fin->n)
			return (0);
		else
			return (1);
	}
	return (aux);
}
/**
 * is_palindrome - function that says if a linked_list is palidrome or not
 * @head: pointer to the head of the linked_list
 * Return: 1 if the linked list is palindrome or 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *aux, *rev;
	int result;

	if (!(*head))
		return (1);

	rev = NULL;
	aux = *head;
	reverse(aux, &rev);
	result = recursion(aux, rev);
	free_listint(rev);
	return (result);
}
