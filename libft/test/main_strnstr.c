#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len);

int main(void)
{
	char *bigstring = "Foo Bar Boo";
	char *little = "Baa";
	char *ptr;
	char *ptr2;

	ptr = strnstr(bigstring, little , sizeof(bigstring));
	ptr2 = ft_strnstr(bigstring, little, sizeof(bigstring));
	printf("big string : %s\n", bigstring);
	printf("Little string : %s\n", little);
	printf("return value strnstr : %s\n", ptr);
	printf("return value ft_strnstr : %s\n", ptr2);

	return (0);
}
