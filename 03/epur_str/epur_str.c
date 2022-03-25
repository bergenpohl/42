#include <unistd.h>

void	epur_str(char *str)
{
	size_t i;

	while (*str == ' ' || *str == '\t')
		str++;
	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		i++;
	write(1, str, i);
	str += i;
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\t')
			str++;
		i = 0;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			i++;
		if (i > 0)
			write(1, " ", 1);
		write(1, str, i);
		str += i;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return 0;
}
