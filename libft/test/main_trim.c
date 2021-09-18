#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set);

int main(void)
{
	char str[] = "acbcbasomeabcthingba";
	char set[] = "abc";
	char *trim;

	trim = ft_strtrim(str, set);
	printf("Word : %s\n", str);
	printf("Trim word : %s\n", trim);
}
