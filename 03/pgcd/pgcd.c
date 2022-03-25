#include <stdio.h>
#include <stdlib.h>

void	pgcd(int a, int b)
{
	int i;
	int min;
	int	pgcd;
	
	min = a > b ? b : a;
	i = 1;
	pgcd = 1;
	while (i < min)
	{
		if (a % i == 0 && b % i == 0)
			pgcd = i;
		i++;
	}
	printf("%d", pgcd);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return 0;
}
