#include "t_point.h"

void	flood_fill(char **tab, t_point size, t_point begin)
{
	t_point	next;
	char	c;
	
	c = tab[begin.y][begin.x];
	tab[begin.y][begin.x] = "F";
	if (begin.x - 1 > 0 && tab[begin.y][begin.x - 1] == c)
	{
		next = begin;
		next.x -= 1;
		flood_fill(tab, size, next);
	}
	if (begin.y - 1 > 0 && tab[begin.y - 1][begin.x] == c)
	{
		next = begin;
		next.y -= 1;
		flood_fill(tab, size, next);
	}
	if (begin.x + 1 < (size.x - 1) && tab[begin.y][begin.x + 1] == c)
	{
		next = begin;
		next.x += 1;
		flood_fill(tab, size, next);
	}
	if (begin.y + 1 < (size.y - 1) && tab[begin.y + 1][begin.x] == c)
	{
		next = begin;
		next.y += 1;
		flood_fill(tab, size, next);
	}
}

/*
#include <stdio.h>

void	print_tab()
{
	
}

char	**make_area(char **zone)
{
		
}

int	main(void) {
	char **area;
	t_point size = { 8, 5 };
	t_point begin = { 2, 2 };
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001"
	};
	area = make_area(zone);
	print_tab(area);
	flood_fill(area, size, begin);
	putc('\n');
	print_tab(area);
	return (0);
}
*/
