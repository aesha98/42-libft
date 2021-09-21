#include "libft.h"
#include <string.h>

//static size_t ft_strlen(char const *str)
//{
	//size_t i;

	//i = 0;
	//while (*(str++))
	//{
		//i++;
	//}
	//return (i);
//}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *con_str;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	con_str = (char *)malloc(len + 1);
	if (con_str == NULL)
		return (NULL);
	strlcpy(con_str, s1 , len);
	strlcat(con_str, s2 , (len + 1));
	return (con_str);
}
