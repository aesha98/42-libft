#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*con_str;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	con_str = (char *)malloc(len + 1);
	if (con_str == NULL)
		return (NULL);
	ft_strlcpy(con_str, s1, len);
	ft_strlcat(con_str, s2, (len + 1));
	return (con_str);
}
