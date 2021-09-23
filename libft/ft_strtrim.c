#include "libft.h"

static int	ignore_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (c);
		i++;
	}
	return (0);
}

static int	get_first_position(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (ignore_set(s1[i], set))
		i++;
	return (i);
}

static int	get_last_pos(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (ignore_set(s1[i], set))
	{
		i--;
	}
	return (i);
}

static int	str_trim_len(char const *s1, char const *set)
{
	return (get_last_pos(s1, set) - get_first_position(s1, set));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		i;
	int		trim_head;

	len = str_trim_len(s1, set) + 1;
	str = (char *)malloc(len);
	if (str == NULL)
		return (NULL);
	i = 0;
	trim_head = get_first_position(s1, set);
	while (i < len)
	{
		str[i] = s1[trim_head];
		i++;
		trim_head++;
	}
	str[i] = '\0';
	return (str);
}
