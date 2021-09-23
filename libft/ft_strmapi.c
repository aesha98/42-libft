#include <stdlib.h>

static unsigned int	ft_strlen(char const *s)
{
	unsigned int	i;

	i = 0;
	while (*(s++))
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	pos;
	char			*str;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (0);
	pos = 0;
	while (pos < len)
	{
		*(str + pos) = *(s + pos);
		*(str + pos) = (*f)(pos, *(str + pos));
		 pos++;
	}
	*(str + pos) = '\0';
	return (str);
}
