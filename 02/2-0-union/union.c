#include <unistd.h>

int is_not_in(char *s, size_t i) {
	size_t j;
	char c;
	
	j = 0;
	c = s[i];
	while (j < i) {
		if (s[j] == c) return 0;
		j++;
	}
	return 1;
}

void ft_union(char *a, char *b) {
	size_t i;
	size_t j;

	i = 0;
	while (a[i] != '\0') {
		if (is_not_in(a, i)) write(1, a + i, 1);
		i++;
	}
	i = 0;
	while (b[i] != '\0') {
		if (is_not_in(b, i)) {
			j = 0;
			while (a[j] != b[i]) {
				if (a[j] == '\0') {
					write(1, b + i, 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}

int main(int argc, char *argv[]) {
	if (argc == 3) ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
