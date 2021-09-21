#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list ;

size_t ft_strlcpy(char *dst, char const *src, size_t siz);
size_t ft_strlcat(char *dst, const char *src, size_t size);
#endif
