#include <unistd.h>

void	ft_putstr(char *str) {
	size_t len;

	len = 0;
	while (str[len] != '\0') {
		len++;
	}
	write(1, str, len);
}

/*
int	main() {
	char str[] = "Hello, world!";

	ft_putstr(str);
	return 0;
}
*/
