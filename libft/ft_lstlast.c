#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
	{
		lst->next = NULL;
		return (lst);
	}
	while (lst)
	{
		i++;
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
