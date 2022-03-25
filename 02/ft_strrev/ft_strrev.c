#include <stddef.h>

char    *ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	c;
	
	len = 0;
	while (str[len] != '\0')
		len++;
	i = len;
	j = 0;
	while (i-- > (len / 2))
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		j++;
	}
	return str;
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char str[] = "Hello, world!";
	
	ft_strrev(str);
	printf("%s\n", str);
	return 0;
}
*/
