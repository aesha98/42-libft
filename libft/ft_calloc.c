#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	mem_len;

	mem_len = n * size;
	ptr = malloc(mem_len);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, mem_len);
	return (ptr);
}
