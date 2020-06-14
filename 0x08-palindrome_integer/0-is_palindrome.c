#include "palindrome.h"

/**
 * is_palindrome - function that says if a number is palidrome or not
 * @n: number to check
 * Return: 1 if it is palindrome or 0 if not
 */
int is_palindrome(unsigned long n)
{
	unsigned long digits = 1, first, last, aux = 0, counter = 0;


	if (n < 10)
		return (1);

	aux = n;
	/* we get the max number of digits */
	while (aux > 9)
	{
		digits = digits * 10;
		aux = aux / 10;
		counter++;
	}
	aux = 0;
	/* now we start the comparison and then we remove that numbers*/
	while (counter > aux)
	{
		first = n / digits;
		last = n % 10;

		if (first != last)
			return (0);

		/* remove the first and last */
		counter--;
		aux++;

		n = (n % digits) / 10;
		digits = digits / 100;

	}

	return (1);

}
