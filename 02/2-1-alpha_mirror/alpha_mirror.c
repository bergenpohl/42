#include <unistd.h>

void	alpha_mirror(char *str) {
	size_t	i;
	char	c;

	i = 0;
	while ((c = str[i]) != '\0') {
		if (c >= 'a' && c <= 'z') {
			str[i] = 'a' + ((((c - 'a') - 12) * -1) + 13);
		} else if (c >= 'A' && c <= 'Z') {
			str[i] = 'A' + ((((c - 'A') - 12) * -1) + 13);
		}
		i++;
	}
	write(1, str, i);
}

int	main(int argc, char *argv[]) {
	if (argc == 2) alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return 0;
}
