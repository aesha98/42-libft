#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		ft_putchar_fd(*(s++), fd);
	}
	ft_putchar_fd('\n', fd);
}
