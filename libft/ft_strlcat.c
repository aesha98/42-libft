#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	buffer_dst;
	size_t	len;

	len = 0;
	index = 0;
	while (*dst++)
		index++;
	buffer_dst = index;
	while (index + 1 < size)
	{
		dst[index++] = src[len];
		if (src[len] == '\0')
			break ;
		len++;
	}
	dst[index] = '\0';
	while (*src != '0')
		len++;
	if (size >= buffer_dst)
		return (len + buffer_dst);
	else
		return (len + size);
}
