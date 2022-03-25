#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*range;
	int	i;
	
	i = end;
	if (start < end)
	{
		range = (int *)malloc((end - start) + 1);
		while (i > start)
		{
			range[end - i] = i;
			i--;
		}
		range[end - i] = i;
	} else
	{
		range = (int *)malloc((start - end) + 1);
		while (i < start) {
			range[i - end] = i;
			i++;
		}
		range[i - end] = i;
	}
	return range;
}

/*
#include <stdio.h>

int	main()
{
	int *range;
	int start;
	int end;
	int i;
	int r;

	start = -15;
	end = 5;
	range = ft_rrange(start, end);
	r = end < start ? start - end : end - start;
	i = 0;
	while (i <= r)
	{
		printf("%d: %d\n", i, range[i]);
		i++;
	}
	return 0;
}
*/
