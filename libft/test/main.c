#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
   char str1[] = "aeshaaaa";
   char str2[] = "awesome";

    printf("str1 before ft_memcpy : %s", str1);
    printf("\n");
    ft_memcpy(str1, str2, sizeof(str2));
    printf("str1 after ft_memcpy : %s", str1);
    printf("\n");
    return (0);
}