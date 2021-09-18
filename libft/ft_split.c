#include <stdlib.h>

static	size_t	ft_strlen(char const *s)
{
	size_t i;

	i = 0;
	while (*(s++))
		i++;
	return (i);
}

static size_t	split_len(char const *s, char c)
{
	size_t delmtr;
	size_t total_splitlen;
	
	delmtr = 0;
	while (*(s++) == c)
		delmtr++;
	total_splitlen = ft_strlen(s) * (delmtr);
	return (total_splitlen);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t i;

	*split = (char **)malloc(sizeof(char) * (split_len(s, c) + 1));
	if (*split == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		*(*split + i) = ft_st
	}
	
	*(*split + i) = NULL;
	return (split);
}
