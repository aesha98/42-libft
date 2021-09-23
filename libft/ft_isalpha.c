#include "libft.h"

int	ft_isalpha(int c)
{
	int	a;

	a = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
