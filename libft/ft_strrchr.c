#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = 0;
	while (*str)
	{
		if (*str == (unsigned char)c)
			last = (char *)str;
		str++;
	}
	if (c == 0)
		return ((char *)str);
	return ((char *)last);
}
