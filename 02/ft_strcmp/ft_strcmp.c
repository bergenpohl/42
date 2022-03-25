int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return s1[i] - s2[i];
}

/*
#include <stdio.h>

int	main()
{
	char a[] = "ABCDEFG";
	char b[] = "ABCDEF*";
	char c[] = "ZYXWVUT";

	printf("ft_strmcp(\"%s\", \"%s\") == %d\n", a, a, ft_strcmp(a, a));
	printf("ft_strmcp(\"%s\", \"%s\") == %d\n", a, b, ft_strcmp(a, b));
	printf("ft_strmcp(\"%s\", \"%s\") == %d\n", b, c, ft_strcmp(b, c));
	return 0;
}
*/
