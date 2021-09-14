#include <stdlib.h>

static void	*ft_memset(void *block, int c, size_t size)
{
	unsigned char *head;
	head = block;
	while (size-- > 0)
	{
		*head++ = (unsigned char)c;
	}
	return (block);
}

void	*ft_calloc(size_t n, size_t size)
{
	int	 *ptr;

	ptr = malloc(n * size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, size);	
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}
