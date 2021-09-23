#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	counter = 0;
	while (*str++ != '\0')
	{
		counter++;
	}
	return (counter);
}
