int	ft_atoi_base(const char *str, int str_base) {
	int		i;
	int		sign;
	char	c;
	char	chars[] = "0123456789abcdef";
	int		n;
	
	sign = *str == '-' ? -1 : 1;
	if (str_base > 16) str_base = 16;
	i = 0;
	while (*str != '\0') {
		c = *str;
		if (c >= 'A' && c <= 'Z') c = 'a' + (c - 'A');
		n = 0;
		while (n < str_base) {
			if (c == chars[n]) {
				i *= str_base;
				i += n;
				break;
			}
			n++;
		}
		str++;
	}
	return i * sign;
}
