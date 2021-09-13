#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *str1, const char *str2, size_t size);
int main(void)
{
    char str1[] = "awesome";
    char str2[] = "aesha";


    int diff = ft_strncmp(str1, str2, 4);
    int ori = strncmp(str1, str2, 4);
    printf("the string difference is (ft_strncmp): %d\n", diff);
    printf("the string difference is (strncmp) : %d\n", ori);
}