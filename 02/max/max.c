int	max(int* tab, unsigned int len) {
	int i;
	int max;

	i = 0;
	max = 0;
	while (i < len) {
		if (tab[i] > max) max = tab[i];
		i++;
	}
	return max;
}

/*
#include <stdio.h>

int	main() {
	int nbrs[] = {1, 2, 300, 4, 5, 6, 7, 8, 100, 21};
	int m;
	
	m = max(nbrs, 10);
	printf("%d\n", m);
	return 0;
}
*/
