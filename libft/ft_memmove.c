#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*head_str1;
	const char	*ptr_const;
	char		*temp;
	const char	*temp2;
	size_t		i;

	i = 0;
	head_str1 = str1;
	ptr_const = str2;
	if (str1 < str2)
	{
		while (i++ < n)
			*head_str1++ = *ptr_const++;
	}
	else
	{
		temp = head_str1;
		temp2 = ptr_const;
		while (i++ < n)
			*temp++ = *temp2++;
	}
	return (str1);
}
