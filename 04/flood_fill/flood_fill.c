void	flood_fill(char **tab, t_point size, t_point begin) {
	t_point	next;
	char	c;
	
	c = tab[begin.y][begin.x];
	tab[begin.y][begin.x] = "F";
	if (begin.x - 1 > 0 && tab[begin.y][begin.x - 1] == c) {
		next = begin;
		next.x -= 1;
		flood_fill(tab, size, next);
	}
	if (begin.y - 1 > 0 && tab[begin.y - 1][begin.x] == c) {
		next = begin;
		next.y -= 1;
		flood_fill(tab, size, next);
	}
	if (begin.x + 1 < (size.x - 1) && tab[begin.y][begin.x + 1] == c) {
		next = begin;
		next.x += 1;
		flood_fill(tab, size, next);
	}
	if (begin.y + 1 < (size.y - 1) && tab[begin.y + 1][begin.x] == c) {
		next = begin;
		next.y += 1;
		flood_fill(tab, size, next);
	}
}
