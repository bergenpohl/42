#include <unistd.h>
#include <stdlib.h>

void	rev_wstr(char *str) {
	
}

int	main(int argc, char *argv[]) {
	if (argc == 2) rev_wstr(argv[1]);
	write(1, "\n", 1);
	return 0;
}
