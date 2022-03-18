#include <stdlib.h>

int     *ft_rrange(int start, int end) {
	int	*range;
	int	i;
	
	i = end;
	if (start < end) {
		range = (int *)malloc((end - start) + 1);
		while (i > start) {
			range[end - i] = i;
			i--;
		}
		range[end - i] = i;
	} else {
		range = (int *)malloc((start - end) + 1);
		while (i < start) {
			range[i - end] = i;
			i++;
		}
		range[i - end] = i;
	}
	return range;
}
