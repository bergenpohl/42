#include <unistd.h>

int	is_pal(char *str, size_t len) {
	size_t i;

	i = 0;
	while (i < (len / 2)) {
		if (str[i] != str[len - i]) return 0;
		i++;
	}
	return 1;
}

void	biggest_pal(char *str) {
	char	*p;
	size_t	plen;
	size_t	i;

	p = str;
	plen = 0;
	while (*str != '\0') {
		i = 0;
		while (str[i] != '\0') {
			if (i + 1 >= plen && is_pal(str, i)) {
				p = str;
				plen = i + 1;
			}
			i++;
		}
		str++;
	}
	write(1, p, plen);
}

int	main(int argc, char *argv[]) {
	if (argc == 2) biggest_pal(argv[1]);
	write(1, "\n", 1);
	return 0;
}
