#include "lists.h"
/**
 * check_cycle - find if a linked list has a loop
 * @list: linked list to go throught
 * Return: 1 if it has loop 0 if not
 */
int check_cycle(listint_t *list)
{
	listint_t *rabbit, *turtle;


	if (!list)
		return (0);

	if (list && list->next && list == list->next)
		return (1);

	rabbit = list->next;
	turtle = list;

	while (turtle && rabbit && rabbit->next)
	{
		if (rabbit == turtle)
			return (1);
		turtle = turtle->next;
		rabbit = rabbit->next->next;
	}
	return (0);
}
