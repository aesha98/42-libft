#include "libft.h"

/*search a memory block for a given value*/
void	*ft_memchr(const void *buffer, int ch, size_t n)
{
	const char	*str;
	size_t		i;

	str = buffer;
	i = 0;
	while (*str++ && n-- > 0)
	{
		if (*str == ch)
			return ((char *)str);
	}
	return (NULL);
}
