#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int	main (void)
{
	char word[] = "test";
	char *sub_str;
	unsigned int start = 1;
	size_t len = 6;
	sub_str = ft_substr(word,start, len);

	printf("Full String : %s\n", word);
	printf("Sub index start : %d index : %c\n",start, word[start]);
	printf("Sub-String : %s\n", sub_str);

	return (0);
}
