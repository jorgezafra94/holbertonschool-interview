#include "lists.h"
/**
 * recursion - function that realize the comparison
 * @begin: original linked_list
 * @fin: actual point of the linked_list
 * @count: total number of elements in linked_list
 * @act: actual element number
 * Return: 1 if the comparison is equal 0 if not
 */
int recursion(listint_t *begin, listint_t *fin, int count, int act)
{
	int aux = 0, valor = 0;
	int c1;


	if (!fin)
		return (1);

	aux = recursion(begin, fin->next, count, act + 1);
	if (aux != 0)
	{

		for (c1 = 0; c1 <= count - act; c1++)
		{
			valor = begin->n;
			begin = begin->next;
		}
		if (valor == fin->n)
			return (1);
		else
			return (0);
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
	int count = 0;
	listint_t *aux;

	if (!(*head))
		return (1);

	aux = *head;
	while (aux != NULL)
	{
		aux = aux->next;
		count++;
	}
	return (recursion(*head, *head, count - 1, 0));
}
