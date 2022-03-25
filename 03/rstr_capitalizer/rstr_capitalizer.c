#include <unistd.h>

void	rstr_capitalizer(int len, char **strings)
{
	int	i;
	char	*str;
	int	isIn;
	
	i = 0;
	while (i < len)
	{
		str = strings[i];
		isIn = 0;
		while (*str != '\0')
		{
			if (*str != ' ' && *str != '\t')
			{
				if (*str >= 'a' && *str <= 'z')
				{
					if (str[1] == ' ' || str[1] == '\t' || str[1] == '\0')
						str[0] = (*str - 'a') + 'A';
				}
				else if (*str >= 'A' && *str <= 'Z')
				{
					if (str[1] != ' ' && str[1] != '\t' && str[1] != '\0')
						str[0] = (*str - 'A') + 'a';
				}
			}
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		rstr_capitalizer(argc - 1, argv + 1);
	else
		write(1, "\n", 1);
	return 0;
}
