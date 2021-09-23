#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = malloc(n * size);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, n);
	return (ptr);
}
