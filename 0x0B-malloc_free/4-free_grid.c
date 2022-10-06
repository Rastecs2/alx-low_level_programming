#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2 dimensional grid previously created
  * @grid: pointer to array
  * @height: array size
  *
  * Return: ---
  */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}

	free(grid);
}
