#include "lists.h"
/**
 * is_palindrome - function that says if a linked_list is palidrome or not
 * @head: pointer to the head of the linked_list
 * Return: 1 if the linked list is palindrome or 0 if not
 */
int is_palindrome(listint_t **head)
{
	int count = 0, c, c1, c2;
	listint_t *begin, *fin, *aux;


	if (!(*head))
		return (1);
	aux = *head;
	while (aux != NULL)
	{
		aux = aux->next;
		count++;
	}
	count--;
	for (c = 0; c <= count / 2; c++)
	{
		begin = *head;
		fin = *head;
		for (c1 = 0; c1 < c; c1++)
			begin = begin->next;
		for (c2 = 0; c2 < count - c; c2++)
			fin = fin->next;
		if (begin->n != fin->n)
			return (0);
	}
	return (1);
}
