#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set);

int main(void)
{
	char str[] = "Heello WorldeH";
	char set[] = "He";
	char *trim;

	trim = ft_strtrim(str, set);
	printf("Word : %s\n", str);
	printf("Trim word : %s\n", trim);
}
