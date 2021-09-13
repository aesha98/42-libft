#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n);

int main(void)
{

char test[] = "aesha";
printf("Before ft_bzero : %s", test);
printf("\n");
ft_bzero(test, sizeof(test));
printf("After ft_bzero : %s", test);
printf("\n");
}