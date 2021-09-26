#include "libft.h"

static size_t	wordlen(char const *s, char c)
{
	size_t	index;

	index = 0;
	while (*s)
	{
		if (*s != c)
		{
			index++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (index);
}

char	**ft_split(char const *s, char c)
{
	char	**split_string;
	size_t	i;
	size_t	sub_len;

	i = 0;
	if (!s)
		return (NULL);
	split_string = malloc(sizeof(char *) * wordlen(s, c) + 1);
	if (!split_string)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			sub_len = 0;
			while ((*s && *s != c) && sub_len++)
				s++;
			split_string[i++] = ft_substr(s - sub_len, 0, sub_len);
		}
		else
			s++;
	}
	split_string[i] = 0;
	return (split_string);
}
