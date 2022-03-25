#include <unistd.h>

int	aff(char *arg)
{
	while (*arg != '\0')
	{
		if (*arg == 'a')
			return 1;
		arg++;
	}
	return 0;
}

int	main(int argc, char *argv[])
{
	if (argc != 2 || aff(argv[1]))
		write(1, "a", 1);
	write(1, "\n", 1);
	return 0;
}
