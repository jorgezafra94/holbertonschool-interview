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
	turtle = list;
	rabbit = list;
	/* with this form we verify all the positions
	  in a faster way*/
	while (rabbit && rabbit->next && rabbit->next->next)
	{
		turtle = turtle->next;
		rabbit = rabbit->next->next;
		if (rabbit == turtle)
			return (1);
	}
	return (0);
}
