#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **jod;
	int x, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	jod = malloc(sizeof(int *) * height);

	if (jod == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		jod[k] = malloc(sizeof(int) * width);

		if (jod[k] == NULL)
		{
			for (; k >= 0; k--)
				free(jod[k]);

			free(jod);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (x = 0; x < width; x++)
			jod[k][x] = 0;
	}

	return (jod);
}
