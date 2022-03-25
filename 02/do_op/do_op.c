#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	do_op(char *a, char *b, char *c)
{
	int i;
	int j;
	int res;
	
	i = atoi(a);
	j = atoi(c);
	if (*b == '+')
		res = i + j;
	else if (*b == '-')
		res = i - j;
	else if (*b == '*')
		res = i * j;
	else if (*b == '/')
		res = i / j;
	else
		res = i % j;
	printf("%d\n", res);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	else
		write(1, "\n", 1);
	return 0;
}
