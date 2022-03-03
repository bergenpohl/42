#include <unistd.h>

void	inter(char *a, char *b) {
	size_t ia;
	size_t ib;
	size_t ic;
	
	ia = 0;
	while (a[ia] != '\0') {
		ib = 0;
		while (b[ib] != '\0') {
			ic = 0;
			if (a[ia] == b[ib]) {
				while (ic < ia && a[ic] != a[ia]) {
					ic++;
				}
				if (ic == ia) write(1, a + ia, 1);
				break;
			} else {
				ib++;
			}
		}
		ia++;
	}
}

int	main(int argc, char *argv[]) {
	if (argc == 3) inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
