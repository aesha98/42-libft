#include <stdlib.h>

static size_t ft_strlen(const char *src)
{
    size_t i;

    i = 0;
    while (*src)
    {
        i++;   
    }
     return (i);  
}

char *ft_strdup(const char *str)
{
    char *word_dup;
    char *cpy;

    word_dup = (char *)malloc(ft_strlen(str) + 1);
    if (word_dup == NULL)
        return (NULL);
    cpy = word_dup;
    while (*str)
    {
        *word_dup++ = *(char *)str++;
    }
    *word_dup = '\0';
    return (cpy);
}
