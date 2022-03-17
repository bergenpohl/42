#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

#define OPERATIONS 2048

uint8_t	*loopForward(register uint8_t *args) {
	register uint16_t others;
	
	others = 0;
	args++;
	while (*args != ']' || others) {
		switch (*args) {
			case '[':
				others++;
				break;
			case ']':
				others--;
				break;
			default:
				break;
		}
		args++;
	}
	return (args);
}

uint8_t	*loopBackward(register uint8_t *args) {
	register uint16_t others;
	
	others = 0;
	args--;
	while (*args != '[' || others) {
		switch (*args) {
			case ']':
				others++;
				break;
			case '[':
				others--;
				break;
			default:
				break;
		}
		args--;
	}
	return (args);
}

void	bf(char *args) {
	char	*ptr;
	int 	*t;
	int	ii;
	
	ptr = (char *)malloc(sizeof(uint8_t) * OPERATIONS);
	t = ptr;
	i = 0;
	while (i < OPERATIONS) {
		ptr[i] = 0;
		++i;
	}
	while (*args) {
		if (*args == '>') {
			ptr++;
		} else if (*args == '<') {
			ptr--;
		} else if (*args == '+') {
			(*ptr)++;
		} else if (*args == '-') {
			(*ptr)--;
		} else if (*args == '.') {
			write(1, ptr, 1);
		} else if (*args == '[') {
			if (!(*ptr)) args = loopForward(args);
		} else if (*args == ']') {
			if (*ptr) args = loopBackward(args);
		}
		args++;
	}
	free(t);
}

int	main(int argc, char *argv[]) {
	if (argc == 2) bf((uint8_t *)(argv[1]));
	return (0);
}
