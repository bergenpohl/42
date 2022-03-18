#include <unistd.h>

void	expand_str(char *str) {
	int is;
	
	is = 0;
	while (*str != '\0') {
		if (*str == ' ' || *str == '\t') {
			while (*str == ' ' || *str == '\t') {
				str++;
			}
			if (*str == '\0') return;
			if (is) write(1, "   ", 3);
		}
		is = 1;
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[]) {
	if (argc == 2) expand_str(argv[1]);
	write(1, "\n", 1);
	return 0;
}
