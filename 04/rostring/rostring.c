#include <unistd.h>
#include <stdlib.h>

size_t	my_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

void	rostring(char *str)
{
	char	**array;
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	k;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
				i++;
			len++;
		} else
			i++;
	}
	array = (char **)malloc(sizeof(char *) * len);
	i = 0;
	while (i < len)
	{
		while ((*str == ' ' || *str == '\t') && *str != '\0')
			str++;
		j = 0;
		while (str[j] != ' ' && str[j] != '\t' && str[j] != '\0')
			j++;
		array[i] = (char *)malloc(sizeof(char) * (j + 1));
		array[i][j] = '\0';
		k = 0;
		while (k < j)
		{
			array[i][k] = str[k];
			k++;
		}
		str += j;
		i++;
	}
	i = 1;
	while (i < len)
	{
		write(1, array[i], my_strlen(array[i]));
		write(1, " ", 1);
		i++;
	}
	write(1, array[0], my_strlen(array[0]));
	i = 0;
	while (i < len)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	main(int argc, char *argv[]) {
	if (argc == 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return 0;
}
