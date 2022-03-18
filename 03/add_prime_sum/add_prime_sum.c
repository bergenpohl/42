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

int	ft_atoi(char *str) {
	int i;
	int sign;

	i = 0;
	while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' || *str == '\f')) {
		str++;
	}
	sign = 1;
	if (*str == '-') {
		str++;
		sign = -1;
	} else if (*str == '+') {
		str++;
	}
	while (*str >= '0' && *str <= '9') {
		i *= 10;
		i += (*str - '0');
		str++;
	}
	return i * sign;
}

int	is_prime(int i) {
	int j;
	
	j = 2;
	while (j < i) {
		if (i % j == 0) return 0;
		j++;
	}
	return 1;
}

void	add_prime_sum(int i) {
	int res;
	int j;
	
	res = 0;
	j = 2;
	while (j <= i) {
		if (is_prime(j)) res += j;
		j++;
	}
	iout(res);
}

int	main(int argc, char *argv[]) {
	int i;
	
	if (argc == 2) {
		i = ft_atoi(argv[1]);
		if (i >= 0) add_prime_sum(i);
	}
	write(1, "\n", 1);
	return 0;
}
