#include <unistd.h>

int	bracket(char **str, int type)
{
	while (**str != '\0')
	{
		if (type == 1 && (**str == ']' || **str == '}'))
			return 0;
		else if (type == 2 && (**str == ')' || **str == '}'))
			return 0;
		else if (type == 3 && (**str == ')' || **str == ']'))
			return 0;
		else if (type == 0 && (**str == ')' || **str == ']' || **str == '}'))
			return 0;

		if (type == 1 && **str == ')')
			return 1;
		else if (type == 2 && **str == ']')
			return 1;
		else if (type == 3 && **str == '}')
			return 1;

		if (**str == '(')
		{
			(*str)++;
			if (bracket(str, 1) == 0)
				return 0;
		}
		else if (**str == '[')
		{
			(*str)++;
			if (bracket(str, 2) == 0)
				return 0;
		}
		else if (**str == '{')
		{
			(*str)++;
			if (bracket(str, 3) == 0)
				return 0;
		}
		(*str)++;
	}
	if (type == 0)
		return 1;
	else
		return 0;
}

void	brackets(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (bracket(argv + i, 0))
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		brackets(argc, argv);
	else
		write(1, "\n", 1);
	return 0;
}
