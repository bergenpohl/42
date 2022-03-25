int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

/*
#include <stdio.h>

int	main()
 {
	char	str[] = "Hello, world!";
	int	i;

	i = ft_strlen(str);
	printf("%d\n", i);
	return 0;
}
*/
