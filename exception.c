#include "header.h"

int	check_exception(int** conditions, int argc)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 3)
	{
		while (j <= 3)
		{
			if (conditions[i][j] < 1 || 4 < conditions[i][j])
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	if (argc != 2)
	{
		return (1);
	}
	return (0);
}