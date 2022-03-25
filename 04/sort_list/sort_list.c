#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*first;
	int	data;

	first = lst;
	while (lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			data = lst->data;
			lst->data = lst->next->data;
			lst->next->data = data;
			lst = first;
		}
		else
			lst = lst->next;
	}
	return first;
}
