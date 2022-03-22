#include <stdlib.h>

char	*ft_itoa_base(int value, int base) {
	char		*a;
	int		len;
	char		map[] = "0123456789ABCDEF";
	unsigned int	t;

	if (value == 0) {
		a = (char *)malloc(sizeof(char) * 2);
		a[0] = '0';
		a[1] = '\0';
		return a;
	}
	len = value < 0 && base == 10 ? 1 : 0;
	if (len) value *= -1;
	t = (unsigned int)value;
	while (t) {
		t /= base;
		len++;
	}
	a = (char *)malloc(sizeof(char) * (len + 1));
	a[len] = '\0';
	t = (unsigned int)value;
	while (t) {
		len--;
		value = t % base;
		t /= base;
		a[len] = map[value];
	}
	if (len) a[0] = '-';
	return a;
}

#include <stdio.h>

int	main() {
	char *a;

	a = ft_itoa_base(12345, 6);
	printf("%s\n", a);
	free(a);
	return 0;
}
