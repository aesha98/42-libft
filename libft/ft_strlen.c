#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t counter;

	while(str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}