#include <unistd.h>

void	wdmatch(char *a, char *b)
{
	size_t i;
	
	i = 0;
	while (*b != '\0')
	{
		if (a[i] == *b)
		{
			i++;
			if (a[i] == '\0')
			{
				write(1, a, i);
				return;
			}
		}
		b++;
	}
}

int	main(int argc, char *argv[]) {
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
