#include <stdlib.h>

int     *ft_rrange(int start, int end) {
	int	*range;
	int	i;
	
	i = start;
	if (start < end) {
		range = (int *)malloc((end - start) + 1);
		while (i <= end) {
			range[i - start] = i;
			i++;
		}
	} else {
		range = (int *)malloc((start - end) + 1);
		while (i >= end) {
			range[start - i] = i;
			i--;
		}
	}
	return range;
}
