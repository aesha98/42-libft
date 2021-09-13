#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int c);

int main(void)
{

char haystack[] = "Hello";
char find = 'z';
char *str;
printf("Haystack : %s   \nNeedle : %c " , haystack, find);
printf("\n");
str = ft_strchr(haystack, find);
printf("After strchr : %s\n", str);
return (0);
}