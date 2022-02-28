#include <stdio.h>
#include <stdlib.h>

void fprime(int i) {
	int v;
	
	v = 2;
	while (v < i) {
		if (i % v == 0) {
			i /= v;
			printf("%d*", v);
		} else {
			v++;
		}
	}
	printf("%d", i);
}

int main(int argc, char *argv[]) {
	if (argc == 2) fprime(atoi(argv[1]));
	printf("\n");
	return 0;
}
