#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int	i;
	int	check_last;

	i = 0;
	if (!lst)
	{
		*(lst + i) = new;
		return ;
	}
	while (*(lst + i) != NULL)
	{
		check_last = i + 1;
		if (*(lst + check_last) == NULL)
		{
			*(lst + check_last) = new;
			break ;
		}
		i++;
	}
}
