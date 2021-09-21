#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	int i;

	i = 0;
	if (!lst)
		lst.next = NULL;
		return (lst);
	lst = lst.next;
	while (lst.next != NULL)
		i++;
	return (*(lst + i));
}
