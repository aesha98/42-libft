#include <stdlib.h>

static	size_t	ft_strlen(char const *s)
{
	size_t i;

	i = 0;
	while (*(s++))
		i++;
	return (i);
}

static int	wordlen(char *s, char c)
{
	int	 letter;
	int	 total_splitlen;
	
	delmtr = 0;
	while (*s)
	{

	}
	total_splitlen = ft_strlen(s) * (delmtr);
	return (total_splitlen);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		 i;
	int len;
	
	if (!s)
		return (NULL);
	len = wordlen((char*)s,c);
	split = (char **)malloc(sizeof(char) * (len + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
		*(*split + i) = ft_st
	*(*split + i) = NULL;
	return (split);
}
