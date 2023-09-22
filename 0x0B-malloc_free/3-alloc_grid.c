#include "main.h"

/**
 * alloc_grid - return a pointer to a 2 dim array
 * of integers
 * @width: integer
 * @height: integer
 *
 * Return: FAIL ? NULL : pointer to mem loc
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (height < 1 || width < 1)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (!array)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (!array[i])
		{
			for (j = 0; j < height; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
