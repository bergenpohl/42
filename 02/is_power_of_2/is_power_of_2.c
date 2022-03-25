int	is_power_of_2(unsigned int n)
{
	int res;
	
	res = 0;
	while (n)
	{
		res += n & 1;
		n = n >> 1;
	}
	return res <= 1 ? 1 : 0;
}

/*
#include <stdio.h>

int	main()
{
	unsigned int a;
	unsigned int b;

	a = 10;
	b = 16;
	printf("%u is power of two ? %d\n", a, is_power_of_2(a));
	printf("%u is power of two ? %d\n", b, is_power_of_2(b));

	return 0;
}
*/
