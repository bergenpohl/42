#include <unistd.h>

void	rotone(char *arg) {
	size_t	i;
	char	c;
	
	i = 0;
	while (arg[i] != '\0') {
		c = arg[i];
		if (c >= 'a' && c <= 'z') {
			arg[i] = 'a' + (((c - 'a') + 1) % 26);
		} else if (c >= 'A' && c <= 'Z') {
			arg[i] = 'A' + (((c - 'A') + 1) % 26);
		}
		i++;
	}
	write(1, arg, i);
}

int	main(int argc, char *argv[]) {
	if (argc == 2) rotone(argv[1]);
	write(1, "\n", 1);
	return 0;
}
