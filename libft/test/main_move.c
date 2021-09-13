#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *str1, const void *str2, size_t n);

int main(void)
{

char dest[] = "aesha";
char src[] = "awesome";

printf("Before memmove : %s ", dest);
printf("\n");
ft_memmove(dest, src, sizeof(src));
printf("After memmove : %s", dest);
printf("\n");
return (0);

}