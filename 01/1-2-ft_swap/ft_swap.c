void	ft_swap(int *a, int *b) {
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
#include <stdio.h>

int	main() {
	int a = 7;
	int b = 19;

	printf("a:%d  b:%d\n", a, b);
	ft_swap(&a, &b);
	printf("a:%d  b:%d\n", a, b);

	return 0;
}
*/
