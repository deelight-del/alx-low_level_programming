#include <stdio.h>
#include <stdlib.h>

/**
*free_grid - frees the grid that is generated
*@grid: grid pointer to a pointer that points to ints
*@height: height/rows of the grid
*
*Return: Nothing.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
