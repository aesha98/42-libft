#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	if ((unsigned char)ch == 0)
		return ((char *)(str + ft_strlen(str)));
	while (*str)
	{
		if (*str == (unsigned char)ch)
			return ((char *)str);
		str++;
	}
	return (0);
}
