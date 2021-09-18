#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void print_alphabet(unsigned int i, char *c)
{
	i = 0;
	printf("%c",*(c + i));
}
void print_odd_letter(unsigned int i, char *str)
{
	if (i % 2 == 0)
	{
		printf("%c", *(str + i));
	}
}
void print_even_letter(unsigned int i, char *str)
{
	i = 0;
	if (i % 2 == 0)
		i++;
	printf("%c",str[i]);
}

int	main(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	printf("The alphabet\n");
	ft_striteri(str, print_alphabet);
	printf("\nOk!\n\n");	
	printf("Print only odd letter in the alphabet :\n");
	printf("Testing ..\n\n");
	printf("Output :");
	char *str2 = "abcdefghijklmnopqrstuvwxyz";
	ft_striteri(str2, print_odd_letter);
	printf("\nOk!\n\n");
	//printf("Print only the even letter in the alphabet:\nTesting..\n\nOutput:");
	//ft_striteri(str, print_even_letter);
	//printf("\nOk!\n\n");
	
	
}
