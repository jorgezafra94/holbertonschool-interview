#include "slide_line.h"
/**
 * move - move the numbers to the specified direction
 * this function order the numbers inside the array,
 * putting all the numbers different from zero in the
 * direction side, 987600000 if left or  00009876 if right
 * @line: array to order
 * @size: size of the array
 * @direction: direction to order
 * Return: nothing
 */

void move(int *line, size_t size, int direction)
{
	int i, j;


	if (direction == 3)
	{
		for (i = 0; i < (int)size; i++)
		{
			if (line[i] != 0 && i != 0)
			{
				for (j = i; j > 0; j--)
				{
					if (line[j] != 0 && line[j - 1] == 0)
					{
						line[j - 1] = line[j];
						line[j] = 0;
					}
				}
			}
		}
	}
	else if (direction == 5)
	{
		for (i = ((int)size - 1); i >= 0; i--)
		{
			if (line[i] != 0 && i != ((int)size - 1))
			{
				for (j = i; j < (int)size - 1; j++)
				{
					if (line[j] != 0 && line[j + 1] == 0)
					{
						line[j + 1] = line[j];
						line[j] = 0;
					}
				}
			}
		}
	}

}

/**
 * equals - is a function that add the first tuple that have
 * the same value, store the result in une of the elements, and
 * replace the other element by 0
 * @line: array to apply this function
 * @size: size of the array
 * @direction: direction to apply the function
 * Return: nothing
 */

void equals(int *line, size_t size, int direction)
{
	int i;


	if (direction == 3)
	{
		for (i = 0; i < (int)size - 1; i++)
		{
			if (line[i] == line[i + 1])
			{
				line[i] += line[i + 1];
				line[i + 1] = 0;
			}
		}
	}
	else if (direction == 5)
	{
		for (i = ((int)size - 1); i > 0; i--)
		{
			if (line[i] == line[i - 1])
			{
				line[i] += line[i - 1];
				line[i - 1] = 0;
			}
		}
	}

}

/**
 * slide_line - function that replicates the logic used in
 * 2048 game, but just applied in one line
 * @line: array to order
 * @size: size of the array
 * @direction: direction to order
 * Return: 1 if success or 0 if not
 */

int slide_line(int *line, size_t size, int direction)
{
	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);
	move(line, size, direction);
	equals(line, size, direction);
	move(line, size, direction);
	return (1);
}
