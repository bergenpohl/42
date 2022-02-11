#include <unistd.h>

int my_atoi(const char *str) {
	int i;
	
	i = 0;
	while (*str >= '0' && *str <= '9') {
		i *= 10;
		i += (*str - '0');
		str++;
	}
	return i;
}

void print_hex(char *str) {
	int		n;
	int		i;
	char	c;
	
	n = my_atoi(str);
	i = 16;
	while (i <= n) {
		i *= 16;
	}
	while (i > 1) {
		i /= 16;
		c = n / i;
		c = c > 9 ? 'a' + (c - 10) : '0' + c;
		write(1, &c, 1);
		n = n % i;
	}
}

int main(int argc, char *argv[]) {
	if (argc == 2) print_hex(argv[1]);
	write(1, "\n", 1);
	return 0;
}
