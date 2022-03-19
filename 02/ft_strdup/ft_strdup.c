#include <stdlib.h>

char    *ft_strdup(char *src) {
	size_t	i;
	char	*ret;
	
	i = 0;
	while (src[i] != '\0') {
		++i;
	}
	ret = (char *)malloc(i + 1);
	if (ret == NULL) return NULL;
	while(i) {
		ret[i] = src[i];
		i--;
	}
	ret[0] = src[0];
	return ret;
}

/*
#include <stdio.h>

int	main(int argc, char *argv[]) {
	char a[] = "Hello, world!";
	char *b;

	b = ft_strdup(a);
	printf("%s\n", b);
	free(b);
	return 0;
}
*/
