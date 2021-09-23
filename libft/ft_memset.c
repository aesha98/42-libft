#include "libft.h"

void	*ft_memset(void *block, int c, size_t size)
{
	size_t			i;
	unsigned char	*head;

	i = 0;
	head = block;
	while (i < size)
	{
		*head++ = (unsigned char) c;
		i++;
	}
	return (block);
}
