#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *str, int c);

int main(void)
{
    char haystack[] = "aesha is awesome";
    char find = 'z';
    char *s;

    printf("haystack : %s\nNeedle : %c\n", haystack,find);
    s = ft_strrchr(haystack,find);

    printf("after ft_strrchr : %s\n", s);
}