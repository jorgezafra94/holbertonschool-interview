#include "palindrome.h"

/**
 * is_palindrome - function that says if a number is palidrome or not
 * @n: number to check
 * Return: 1 if it is palindrome or 0 if not
 */
int is_palindrome(unsigned long n)
{
	unsigned long digits = 1, first, last, counter = 0, aux = 0;


	if (n < 10)
		return (1);
	/* we get the max number of digits */
	while ((n % digits) != n)
	{
		digits = digits * 10;
		counter++;
	}

	digits = digits / 10;

	/* now we start the comparison and then we remove that numbers*/
	while (counter > aux)
	{
		first = n / digits;
		last = n % 10;

		if (first != last)
			return (0);

		/* remove the first and last */
		n = n % digits;
		n = n / 10;

		digits = digits / 100;
		counter--;
		aux++;
	}

	return (1);

}
