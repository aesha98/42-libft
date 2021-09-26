#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	list = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (list)
	{
		if (list->next == NULL)
		{
			list->next = new;
			break ;
		}
		list = list->next;
	}
}
