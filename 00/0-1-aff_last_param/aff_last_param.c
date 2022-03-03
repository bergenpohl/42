#include <unistd.h>

size_t	ft_strlen(char *str) {
	size_t i;

	i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}

void	aff_last_param(char *arg) {
	write(1, arg, ft_strlen(arg));
}

int	main(int argc, char *argv[]) {
	if (argc > 1) aff_last_param(argv[argc - 1]);
	write(1, "\n", 1);
	return 0;
}
