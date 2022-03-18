#include <unistd.h>

void	ulstr(char *str) {
	char c;
	
	while (*str != '\0') {
		c = *str;
		if (c >= 'a' && c <= 'z') c -= 32;
		else if(c >= 'A' && c <= 'Z') c += 32;
		write(1, &c, 1);
		str++;
	}
}

int	main(int argc, char *argv[]) {
	if (argc == 2) ulstr(argv[1]);
	write(1, "\n", 1);
	return 0;
}
