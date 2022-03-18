int	is_power_of_2(unsigned int n) {
	int res;
	
	res = 0;
	while (n) {
		res += n & 1;
		n = n >> 1;
	}
	return res <= 1 ? 1 : 0;
}
