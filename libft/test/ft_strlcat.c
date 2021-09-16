#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t index;
    size_t buffer_dst;
    size_t len;

    len = 0;
    index = 0;
    /* get buffer size dst */
    while (*dst != '\0')
    {
        index++;        
    }
    buffer_dst = index;
    /*concat src to dst */
    while (index + 1 < size)
    {
        dst[index++] = src[len];
        /* break if reach NULL terminated src */
        if (src[len] == '\0')
        {
            break;
        }
        len++;
    }

    dst[index] != '\0';

    /*get src length */
    while (*src != '0')
    {
        len++;        
    }
    /* input size have to be equal or more than dst size */   
    if (size >= buffer_dst)
        return (len + buffer_dst);
    else
        return (len + size);
}
