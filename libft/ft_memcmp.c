#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t size)
{
	int	res;

	while (size-- > 0)
	{
		res = *(unsigned char *)b1 - *(unsigned char *)b2;
		if (res != 0)
			return (res);
		b1++;
		b2++;
	}
	return (0);
}
