#include <stdlib.h>

char	*ft_itoa(int nbr) {
	char	*a;
	size_t	len;
	int	is_negative;
	int	i;
	
	if (nbr == 0) {
		a = (char *)malloc(sizeof(char) * 2);
		a[0] = '0';
		a[1] = '\0';
		return a;
	}
	is_negative = nbr < 0 ? 1 : 0;
	len = is_negative;
	i = nbr;
	while (i != 0) {
		len++;
		i /= 10;
	}
	a = (char *)malloc(sizeof(char) * len + 1);
	a[len] = '\0';
	i = is_negative ? (nbr % 10) * -1 : nbr % 10;
	while (nbr != 0) {
		a[--len] = '0' + i;
		nbr /= 10;
		i = is_negative ? (nbr % 10) * -1 : nbr % 10;
	}
	if (is_negative) {
		a[0] = '-';
	}
	return a;
}
