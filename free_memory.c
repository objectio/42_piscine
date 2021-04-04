#include "header.h"

void	free_memory(int** conditions, int* answer)
{
	int	i;

	free(conditions);
	i = 0;
	while (i < 4)
	{
		free(conditions[i++]);
	}
	free(answer);
}