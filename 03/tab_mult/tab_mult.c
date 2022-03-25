#include <unistd.h>

int	my_atoi(char *str)
{
	int i;
	
	i = 0;
	while (*str != '\0')
	{
		i *= 10;
		i += *str - '0';
		str++;
	}
	return i;
}

void	iout(int i)
{
	int q;
	int n;
	char c;
	
	n = i / 10;
	q = 1;
	while (n)
	{
		q *= 10;
		n /= 10;
	}
	while (q)
	{
		c = '0' + (i / q);
		i = i % q;
		q /= 10;
		write(1, &c, 1);
	}
}

void	tab_mult(char *arg)
{
	int n;
	int i;
	
	n = my_atoi(arg);
	i = 1;
	while (i < 10)
	{
		iout(i);
		write(1, " x ", 3);
		iout(n);
		write(1, " = ", 3);
		iout(i * n);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		tab_mult(argv[1]);
	else
		write(1, "\n", 1);
	return 0;
}
