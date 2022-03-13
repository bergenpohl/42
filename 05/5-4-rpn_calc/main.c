#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	rpn_calc(char *str) {
	
}

int	is_valid(char *str) {
	
}

int	main(int argc, char *argv[]) {
	if (argc == 2 && is_valid(argv[1])) rpn_calc(argv[1]);	
	else write(1, "Error\n", 6);
	return 0;
}
