#include "libft.h"

size_t	ft_strlcpy( char *dst, const char *src, size_t siz)
{
	size_t	offset;

	offset = 0;
	if (siz > 0)
	{
		while (*src && offset + 1 < siz)
		{
			*dst++ = *src++;
			offset++;
		}
	}
	if (offset < siz)
		*dst = '\0';
	while (*src++)
		offset++;
	return (offset);
}
