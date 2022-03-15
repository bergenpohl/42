#include <stdlib.h>
#include "list.h"

int	cycle_detector(const t_list *list) {
	t_list	*p;
	t_list	*q;
	size_t	i;
	size_t	len;

	p = (t_list *)list;
	len = 0;
	while (p) {
		i = 0;
		q = (t_list *)list;
		while (i < len) {
			if (q == p) return 1;
			i++;
			q = q->next;
		}
		p = p->next;
		len++;
	}
	return 0;
}
