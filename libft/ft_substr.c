#include <stdlib.h>
static size_t ft_strlen(char const *s)
{
	size_t i;
	
	i = 0;
	while (*(s++))
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 	*substr;
	size_t 	size;
	size_t 	i;

	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	size = len - start;
	substr  = (char *)malloc(size + 1);
	if (substr == NULL)
		return (NULL);
	i = start;
	while ((*(s + i)) && (i < len))
	{
		*substr = *(s + i);
		substr++;
		i++;
	}
	*substr = '\0';
	return (substr - size);
}
