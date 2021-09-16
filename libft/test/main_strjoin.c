#include <stdio.h>
#include <string.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2);

int main(void)
{
	char s1[] = "Little Mix ";
	char s2[] = "is awesome i love them";

	char *concat;
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	concat = ft_strjoin(s1, s2);
	printf("concat string : %s\n", concat);
}
