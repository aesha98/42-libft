#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *buffer, int ch, size_t n);

int main(void)
{
    const char buffer[] = "aesha is awesome";
    const char find = 'i';
    char *str;
    printf("before memchr : %s\n", buffer);
    str = ft_memchr(buffer,find, strlen(buffer));
    printf("after memchr : %s\n", str);
    return (0);
}