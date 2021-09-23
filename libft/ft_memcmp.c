#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t size)
{
	const char	*str1;
	const char	*str2;

	str1 = b1;
	str2 = b2;
	while ((str1++ && str2++) && (size-- > 0))
	{
		if (str1 != str2)
			break ;
	}
	if (size == 0)
		return (0);
	else
		return (*str1 - *str2);
}
