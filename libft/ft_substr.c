#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;
	size_t	i;

	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	size = len;
	substr = malloc(sizeof(char) * (size + 1));
	if (substr == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		*substr = '\0';
		return (substr);
	}
	i = 0;
	while (i < len)
	{
		*(substr + i) = (*(s + start + i));
		i++;
	}
	*(substr + i) = '\0';
	return (substr);
}
