char	*ft_strcpy(char *s1, char *s2)
{
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = *s2;
	return s1;
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
 {
	char a[] = "Hello, world!\n";
	char b[15];

	ft_strcpy(b, a);
	printf("%s", b);

	return 0;
}
*/
