#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	while ((*str1 && *str2) && (size > 0))
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
		size--;
	}
	if (size == 0)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
