void	printbits(unsigned char octet) {
	unsigned char	i;
	char		cs[8];
	
	i = 0;
	while (i < 8) {
		cs[i] = '0' + (octet & 128 ? 1 : 0);
		octet = octet << 1;
		i++;
	}
	write(1, cs, 8);
}
