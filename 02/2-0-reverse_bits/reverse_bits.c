unsigned char	reverse_bits(unsigned char octet) {
	unsigned char	r;
	int		i;

	r = 0;
	i = 0;
	while (i < 8) {
		r = r << 1;
		r += octet & 1;
		octet = octet >> 1;
		i++;
	}
	return r;
}
