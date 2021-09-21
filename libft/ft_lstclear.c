#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *list;

	list = *lst.next;
	while (*lst)		
	{	
		(*del)(*lst.content);
		free(*lst);
		lst++;
	}
	list = NULL;
}
