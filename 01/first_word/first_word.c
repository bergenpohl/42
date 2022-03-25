#include <unistd.h>

void	first_word(char *arg)
{
	while (*arg != '\0')
	{
		if (*arg != '\t' && *arg != ' ')
		{
			while (*arg != '\t' && *arg != ' ' && *arg != '\0')
			{
				write(1, arg, 1);
				arg++;
			}
			return;
		}
		arg++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return 0;
}
