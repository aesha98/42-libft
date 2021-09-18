#include <stdlib.h>

static unsigned int str_len(char *s)
{
	unsigned int i;

	i = 0;
	while (*(s++))
		i++;
	return (i);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;
	unsigned int	i;
	
	if (!s || !f)
		return ;
	len = str_len(s);
	i = 0;
	while (i < len)
	{	f(i, (s + i));
		i++;
	}
}
