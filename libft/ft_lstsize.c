#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	if (!lst)
		return (i);
	while (lst.next != NULL)
		i++;
	return (i);
}