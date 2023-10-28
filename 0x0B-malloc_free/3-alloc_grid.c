#include "main.h"
/**
 * alloc_grid - Allocates a 2D array of integers and initializes it to 0.
 * @width: The width of the grid.
 * @height: The height of the grid.
 * Return: A pointer to the 2D array.
 */
int **alloc_grid(int width, int height) 
{        
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
	{        
		return (NULL);
	} 
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{        
		return (NULL);
        }        
	for (i = 0; i < height; i++)
	{
	grid[i] = calloc(width, sizeof(int));
	if (grid[i] == NULL)
	{
		return (NULL);
	}
	}
	return (grid);
}
