#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*alloc_grid - allocates memory for 2D array
*@width: width of array
*@height: height of array
*
*Return: pointer to memory allocated
*/

int **alloc_grid(int width, int height)
{
	int **mem_array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem_array = malloc(sizeof(int *) * height);

	if (mem_array == NULL)
	{
		free(mem_array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		mem_array[i] = malloc(sizeof(int) * width);
		if (mem_array[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(mem_array[j]);
			}
			free(mem_array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mem_array[i][j] = 0;
	}
	return (mem_array);
}
