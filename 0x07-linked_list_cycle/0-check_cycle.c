#include "lists.h"
/**
 * check_cycle - find if a linked list has a loop
 * @list: linked list to go throught
 * Return: 1 if it has loop 0 if not
 */
int check_cycle(listint_t *list)
{
	listint_t *rabbit, *turtle;

	rabbit = list;
	turtle = list;

	while (rabbit && rabbit->next->next && turtle && turtle->next)
	{
		rabbit = rabbit->next->next;
		turtle = turtle->next;
		if (rabbit == turtle)
			return (1);
	}
	return (0);
}
