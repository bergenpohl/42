#include <unistd.h>
#include <stdlib.h>

#define OPERATIONS 2048

char	*loopForward(char *args)
{
	int others;
	
	others = 0;
	args++;
	while (*args != ']' || others)
	{
		if (*args == '[')
			others++;
		else if (*args == ']')
			others--;
		args++;
	}
	return (args);
}

char	*loopBackward(char *args)
{
	int others;
	
	others = 0;
	args--;
	while (*args != '[' || others)
	{
		switch (*args) {
			case ']':
				others++;
				break;
			case '[':
				others--;
				break;
			default:
				break;
		}
		args--;
	}
	return (args);
}

void	bf(char *args) {
	char	*ptr;
	char 	*t;
	int	i;
	
	ptr = (char *)malloc(sizeof(char) * OPERATIONS);
	t = ptr;
	i = 0;
	while (i < OPERATIONS)
	{
		ptr[i] = 0;
		i++;
	}
	while (*args) {
		if (*args == '>')
			ptr++;
		else if (*args == '<')
			ptr--;
		else if (*args == '+')
			(*ptr)++;
		else if (*args == '-')
			(*ptr)--;
		else if (*args == '.')
			write(1, ptr, 1);
		else if (*args == '[' && !(*ptr))
			args = loopForward(args);
		else if (*args == ']' && *ptr)
			args = loopBackward(args);
		args++;
	}
	free(t);
}

int	main(int argc, char *argv[]) {
	if (argc == 2)
		bf(argv[1]);
	return (0);
}
