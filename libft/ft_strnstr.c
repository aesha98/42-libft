#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while ((big[i + j] && little[j] == big[i + j]) && (i + j < len))
		{
			if (little[j + 1] == 0)
				return ((char *)(&big[i]));
			j++;
		}
		i++;
	}
	return (NULL);
}
