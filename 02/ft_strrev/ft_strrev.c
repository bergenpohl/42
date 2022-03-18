char    *ft_strrev(char *str) {
	size_t	i, j, len;
	char	c;
	
	len = 0;
	while (str[len] != '\0') {
		len++;
	}
	i = len;
	j = 0;
	while (i-- > (len / 2)) {
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		j++;
	}
	return str;
}
