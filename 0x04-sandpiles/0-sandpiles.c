#include "sandpiles.h"

/**
 * print_grid - print all the grid
 * @grid: grid to analize
 * Return: no return
 */
void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}


/**
 * addition - adds to sandpiles
 * @grid1: sandpile to change
 * @grid2: sandpile to add
 * Return: no return
 */
void addition(int grid1[3][3], int grid2[3][3])
{
	int i, j;


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] += grid2[i][j];
		}
	}
}


/**
 * stable - says if a sandpile is stable or not
 * @grid1: sandpile to sift
 * Return: 1 if it is unstable or 0 if it is stable
 */
int stable(int grid1[3][3])
{
	int i, j, flag;


	flag = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid1[i][j] > 3)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	return (flag);
}


/**
 * sandpiles_algo - algorithm to operate the unstables sandpiles
 *   we have to check if the original one (aux) in each position
 *   is bigger than 3 in order to know if we have to check that
 *   position in grid1 to proceed with the algorithm
 * @grid1: sandpile to change
 * @aux: backup sandpile
 * Return: no return
 */
void sandpiles_algo(int grid1[3][3], int aux[3][3])
{
	int i, j;


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			aux[i][j] = grid1[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (aux[i][j] > 3)
			{
				grid1[i][j] -= 4;

				if ((i - 1) >= 0)
					grid1[i - 1][j] += 1;

				if ((i + 1) <= 2)
					grid1[i + 1][j] += 1;

				if ((j - 1) >= 0)
					grid1[i][j - 1] += 1;

				if ((j + 1) <= 2)
					grid1[i][j + 1] += 1;
			}
		}
	}
}


/**
 * sandpiles_sum - realize all the operation of sandpiles
 * @grid1: sandpile to change
 * @grid2: sandpile to add
 * Return: no return
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int aux[3][3];

	addition(grid1, grid2);
	while (stable(grid1) != 0)
	{
		printf("=\n");
		print_grid(grid1);
		sandpiles_algo(grid1, aux);
	}
}
