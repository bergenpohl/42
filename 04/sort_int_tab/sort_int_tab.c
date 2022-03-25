void	sort_int_tab(int *tab, unsigned int size)
{
	int i;
	int t;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			t = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = t;
			if (i != 0)
				i--;
			else
				i++;
		} else
			i++;
	}
}

/*
#include <stdio.h>

int	main()
{
	int tab[] = {5, 3, 2, 4};
	int tab_size;
	int i;

	tab_size = 4;
	i = 0;
	while (i < tab_size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	puts("");
	sort_int_tab(tab, tab_size);
	i = 0;
	while (i < tab_size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	puts("");
}
*/
