#include <unistd.h>

void	rot_13(char *arg) {
	char c;
	
	while (*arg != '\0')
	{
		c = *arg;
		if (c >= 'a' && c <= 'z')
			c = 'a' + (((c - 'a') + 13) % 26);
		else if (c >= 'A' && c <= 'Z')
			c = 'A' + (((c - 'A') + 13) % 26);
		write(1, &c, 1);
		arg++;
	}
}

int	main(int argc, char*argv[])
{
	if (argc == 2) rot_13(argv[1]);
	write(1, "\n", 1);
	return 0;
}
