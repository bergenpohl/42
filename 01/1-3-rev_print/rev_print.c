#include <unistd.h>

void	rev_print(char *arg) {
	size_t i;

	i = 0;
	while (arg[i] != '\0') {
		i++;
	}
	while (i--) {
		write(1, arg + i, 1);
	}
}

int	main(int argc, char *argv[]) {
	if (argc == 2) rev_print(argv[1]);
	write(1, "\n", 1);
	return 0;
}
