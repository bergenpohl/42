unsigned char	swap_bits(unsigned char octet)
{
	unsigned char res;

	res = octet & 15;
	res = res << 4;
	octet = octet >> 4;
	res += octet & 15;
	return res;
}

/*
#include "../print_bits/print_bits.c"

int	main()
{
	unsigned char c = 'a';
	unsigned char r;

	r = swap_bits(c);
	printbits(c);
	write(1, "\n", 1);
	printbits(r);
	return 0;
}
*/
