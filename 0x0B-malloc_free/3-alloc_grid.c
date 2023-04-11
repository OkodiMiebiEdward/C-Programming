#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - make grid with nested loop
 * @width: input for the width argument
 * @height: input for the height argument
 * Return: a pointer to a 2-dimensional array is returned
 */
int **alloc_grid(int width, int height)
{
	/*2 dimensional array pointer*/
	int **locat;
	int p = 0;
	int q = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	locat = malloc(sizeof(int *) * height);

	if (locat == NULL)
		return (NULL);

	for (; p < height; p++)
	{
		locat[p] = malloc(sizeof(int) * width);

		if (locat[p] == NULL)
		{
			for (; p >= 0; p--)
				free(locat[p]);

			free(locat);
			return (NULL);
		}
	}

	for (; p < height; p++)
	{
		for (; q < width; q++)
			locat[p][q] = 0;
	}

	return (locat);
}

