void	sort_int_tab(int *tab, unsigned int size) {
	int i;
	int t;

	i = 0;
	while (i < size - 1) {
		if (tab[i] > tab[i + 1]) {
			t = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = t;
			if (i != 0) i--;
			else i++;
		} else {
			i++;
		}
	}
}
