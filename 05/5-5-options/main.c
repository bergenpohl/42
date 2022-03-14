#include <unistd.h>

void	print_int(int i) {
	int n;

	n = 0;
	while (n < sizeof(int) * 8) {
		if (i & (1 << ((sizeof(int) * 8) - 1))) {
			write(1, "1", 1);
		} else {
			write(1, "0", 1);
		}
		i = i << 1;
		if ((n + 1) % 8 == 0 && (n + 1) != (sizeof(int) * 8)) {
			write(1, " ", 1);
		}
		n++;
	}
	write(1, "\n", 1);
}

int	option(char *str) {
	int	stock;
	int	i;

	stock = 0;
	i = 1;
	while (str[i] != '\0') {
		if (str[i] < 'a' || str[i] > 'z') {
			return -1;
		}
		stock = stock | (1 << (str[i] - 'a'));
		i++;
	}
	return stock;
}

void	options(int argc, char **argv) {
	int	stock;
	int	i;
	int	r;

	stock = 0;
	i = 1;
	while (i < argc) {
		if (argv[i][0] == '-' && argv[i][1] != '\0') {
			r = option(argv[i]);
			if (r < 0) {
				write(1, "Invalid Option\n", 15);
				return;
			}
			stock = stock | r;
		}
		i++;
	}
	if (stock == 0 || stock & 128) {
		write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
	} else {
		print_int(stock);
	}
}

int	main(int argc, char *argv[]) {
	options(argc, argv);
	return 0;
}
