#include <unistd.h>

void	iout(int i) {
	int q;
	int n;
	char c;
	
	n = i / 10;
	q = 1;
	while (n) {
		q *= 10;
		n /= 10;
	}
	while (q) {
		c = '0' + (i / q);
		i = i % q;
		q /= 10;
		write(1, &c, 1);
	}
}

void	paramsum(int i) {
	iout(i);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[]) {
	paramsum(argc - 1);
	return 0;
}
