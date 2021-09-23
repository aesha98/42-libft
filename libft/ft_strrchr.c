#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = 0;
	while (*str++)
	{
		if (*str == c)
			last = (char *)str;
	}
	return ((char *)last);
}
