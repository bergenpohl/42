#include <unistd.h>

void	repeat_alpha(char *str)
{
	char	c;
	int	i;

	while (*str != '\0')
	{
		c = *str;
		if (c >= 'a' && c <= 'z')
		{
			i = c - 'a';
			while (i-- > 0)
				write(1, &c, 1);
		} else if (c >= 'A' && c <= 'Z')
		{
			i = c - 'A';
			while (i-- > 0)
				write(1, &c, 1);
		}
		write(1, &c, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2) repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return 0;
}
