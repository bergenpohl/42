#include <stdlib.h>

int *ft_range(int start, int end) {
	int *range;
	int i;

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

/*
#include <stdio.h>

int	main() {
	int *range;
	int start;
	int end;
	int i;
	int r;

	start = -15;
	end = 5;
	range = ft_range(start, end);
	r = end < start ? start - end : end - start;
	i = 0;
	while (i <= r) {
		printf("%d: %d\n", i, range[i]);
		i++;
	}
	return 0;
}
*/
