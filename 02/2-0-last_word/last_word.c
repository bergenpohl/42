#include <unistd.h>

void last_word(char *str) {
	char *a;
	char *b;
	int state;

	a = NULL;
	b = NULL;
	state = 0;
	while (*str != '\0') {
		if (state == 0 && *str != ' ' && *str != '\t') {
			a = str;
			state = 1;
		} else if (state == 1 && (*str == ' ' || *str == '\t')) {
			b = str;
			state = 0;
		}
		str++;
	}
	if (state == 0) {
		write(1, a, b - a);
	} else {
		write(1, a, str - a);
	}
}

int main(int argc, char *argv[]) {
	if (argc == 2) last_word(argv[1]);
	write(1, "\n", 1);
	return 0;
}
