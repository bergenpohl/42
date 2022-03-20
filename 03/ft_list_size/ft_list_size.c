#include "ft_list.h"

int	ft_list_size(t_list *begin_list) {
	int len;
	
	len = 0;
	while (begin_list != NULL) {
		len++;
		begin_list = begin_list->next;
	}
	return len;
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main() {
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	lst->next = (t_list *)malloc(sizeof(t_list));
	lst->next->next = (t_list *)malloc(sizeof(t_list));
	lst->next->next->next = NULL;
	printf("%d\n", ft_list_size(lst));
	return 0;
}
*/
