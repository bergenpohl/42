#include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char		*str;
}			t_list;

void	listadd(t_list **list, char *str) {
	t_list *i;
	
	if (*list == NULL) {
		*list = (t_list *)malloc(sizeof(t_list));
		(*list)->str = str;
		(*list)->next = NULL;
		return;
	}
	i = (*list);
	while (i->next != NULL) {
		i = i->next;
	}
	i->next = (t_list *)malloc(sizeof(t_list));
	i->next->str = str;
	i->next->next = NULL;
}

char	**ft_split(char *str) {
	char	**res;
	char	*a;
	t_list	*list;
	t_list	*last;
	size_t	len;
	size_t	i;
	size_t	size;
	
	list = NULL;
	while ((*str == ' ' || *str == '\t' || *str == '\n') && *str != '\0') {
		str++;
	}
	size = 0;
	while (*str != '\0') {
		len = 0;
		while (str[len] != ' ' && str[len] != '\t' && str[len] != '\n' && str[len] != '\0') {
			len++;
		}
		a = (char *)malloc(sizeof(char) * (len + 1));
		a[len] = '\0';
		i = 0;
		while (i < len) {
			a[i] = str[i];
			i++;
		}
		str += len;
		listadd(&list, a);
		while ((*str == ' ' || *str == '\t' || *str == '\n') && *str != '\0') {
			str++;
		}
		size++;
	}
	res = (char **)malloc(sizeof(char *) * (size + 1));
	res[size] = NULL;
	i = 0;
	while (list != NULL) {
		last = list;
		res[i] = list->str;
		i++;
		list = list->next;
		free(last);
	}
	return res;
}
