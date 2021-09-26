#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new_list;

	new_list = 0;
	while (lst)
	{
		list = ft_lstnew((*f)(lst->content));
		if (list == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, list);
		lst = lst->next;
	}
	return (new_list);
}
