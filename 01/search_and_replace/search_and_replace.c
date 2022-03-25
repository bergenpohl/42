#include <unistd.h>

void	search_and_replace(char *str, char *sea, char *rep)
{
	int i;
	
	while (*str != '\0')
	{
		if (*str == *sea)
			write(1, rep, 1);
		else
			write(1, str, 1);
		str++;
	}
}

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

int	main(int argc, char *argv[])
{
	if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return 0;	
}
