#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int size;
	
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc((size) * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}


int main()
{
    
    int i = 0;
    int *result;
    ft_ultimate_range(&result,-4, 7);
    while (i < 7)
    {
        printf("%d", result[i]);
        i++;
    }
    printf("\n%d", ft_ultimate_range(&result,-4, 7));

    return 0;
}