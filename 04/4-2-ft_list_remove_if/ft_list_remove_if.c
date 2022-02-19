#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)()) {
	t_list *list;
	t_list *last;
	
	while (*begin_list && (*cmp)((*begin_list)->data, data_ref) == 0) {
		list = (*begin_list)->next;
		free(*begin_list);
		*begin_list = list;
	}
	if (!(*begin_list)) return;
	last = *begin_list;
	list = (*begin_list)->next;
	while (list) {
		if ((*cmp)(list->data, data_ref) == 0) {
			last->next = list->next;
			free(list);
			list = last->next;
		} else {
			last = list;
			list = list->next;
		}
	}
}
