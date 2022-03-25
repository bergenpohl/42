unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	r;
	int		i;

	r = 0;
	i = 0;
	while (i < 8)
	{
		r = r << 1;
		r += octet & 1;
		octet = octet >> 1;
		i++;
	}
	return r;
}

/*
#include "../print_bits/print_bits.c"

int	main()
{
	unsigned char c = 'a';
	unsigned char r;
	
	r = reverse_bits(c);
	printbits(c);
	write(1, "\n", 1);
	printbits(r);
	return 0;
}
*/
