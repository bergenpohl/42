unsigned char	swap_bits(unsigned char octet) {
	unsigned char res;

	res = octet & 15;
	res = res << 4;
	octet = octet >> 4;
	res += octet & 15;
	return res;
}
