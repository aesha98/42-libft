#include <stdlib.h>

char *ft_strchr(const char *str, int ch)
{
        if (*str == ch)
        {
            return ((char *)str);
        }
        else
        {
            while(*str++)
            {
                if (*str == ch)
                    return ((char *)str);
            }
            
        }

    return (0);
}