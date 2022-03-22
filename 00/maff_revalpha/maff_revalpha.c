#include <unistd.h>

int	main() {
	int	i;
	char	c;

	i = 25;
	while (i >= 0) {
		c = 'a' + i;
		if (i % 2 == 0) c -= 32;
		write(1, &c, 1);
		i--;
	}
	write(1, "\n", 1);
	return 0;
}
