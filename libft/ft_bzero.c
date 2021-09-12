#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
    char *str;
    size_t i;

    str = s;
    i = 0;
    while (i < n)
    {
      *str++ = '\0';
      i++;
    }
    
}