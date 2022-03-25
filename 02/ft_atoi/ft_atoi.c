int	ft_atoi(const char *str)
{
	int i;
	int sign;

	i = 0;
	while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' || *str == '\f'))
		str++;
	sign = 1;
	if (*str == '-')
	{
		str++;
		sign = -1;
	} else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		i *= 10;
		i += (*str - '0');
		str++;
	}
	return i * sign;
}

/*
#include <stdio.h>

// -2147483648
// 2147483647

int	main()
{
	char	str[] = "-2147483648";
	int	i;

	i = ft_atoi(str);
	printf("%d\n", i);
	return 0;
}
 */
