#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t size)
{
	int	res;

	while (size-- > 0)
	{
		if (*(unsigned char *)b1 != *(unsigned char *)b2)
		{
			res = *(unsigned char *)b1 - *(unsigned char *)b2;
			b1++;
			b2++;
		}
	}
	if (size == 0)
		return (0);
	else
		return (res);
}
