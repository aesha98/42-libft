#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	buffer_dst;
	size_t	len;
	size_t	src_len;

	buffer_dst = 0;
	src_len = 0;
	while (dst[buffer_dst])
		buffer_dst++;
	while (src[src_len])
		src_len++;
	if (buffer_dst > size)
		return (size + src_len);
	len = 0;
	while (src[len] && len + buffer_dst + 1 < size)
	{
		dst[buffer_dst + len] = src[len];
		len++;
	}
	dst[buffer_dst + len] = '\0';
	return (buffer_dst + src_len);
}
