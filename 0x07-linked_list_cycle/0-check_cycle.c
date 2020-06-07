#include "lists.h"
/**
 * check_cycle - find if a linked list has a loop
 * @list: linked list to go throught
 * Return: 1 if it has loop 0 if not
 */
int check_cycle(listint_t *list)
{
	listint_t *rabbit, *turtle;


	if (!list || !list->next || !list->next->next)
		return (0);

	rabbit = list->next->next;
	turtle = list->next;

	while (turtle && rabbit)
	{
		if (rabbit == turtle)
			return (1);
		if (!turtle->next || !rabbit->next->next)
			return (0);
		rabbit = rabbit->next->next;
		turtle = turtle->next;
	}
	return (0);
}
