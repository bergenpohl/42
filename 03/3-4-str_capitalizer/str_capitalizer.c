#include <unistd.h>

void	str_capitalizer(int len, char **strings) {
	int	i;
	char	*str;
	int	isIn;
	
	i = 0;
	while (i < len) {
		str = strings[i];
		isIn = 0;
		while (*str != '\0') {
			if (*str != '\t' && *str != ' ') {
				if (*str >= 'a' && *str <= 'z' && !isIn) *str = (*str - 'a') + 'A';
				else if (*str >= 'A' && *str <= 'Z' && isIn) *str = (*str - 'A') + 'a';
				isIn = 1;
			} else {
				isIn = 0;
			}
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[]) {
	str_capitalizer(argc - 1, argv + 1);
	return 0;
}
