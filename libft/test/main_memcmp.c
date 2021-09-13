#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *b1, const void *b2, size_t size);

int main(void)
{
    char b1[] = "aesha";
    char b2[] = "awesome";
    printf("memcmp : %d\n", memcmp(b1, b2, 3));
    //printf("ft_memcmp : %d\n ", ft_memcmp(b1,b2, sizeof(b2)));
    return (0);
}