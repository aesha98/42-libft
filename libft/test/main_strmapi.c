#include <stdio.h>
#include <stdlib.h>

char *ft_strmapi(char const *s, char(*f)(unsigned int,char));

char	get_alphabet_even(unsigned int i, char c)
{
	if (!(i % 2 == 0))
	{
		if ( c >= 'a' && c <= 'z')
		{
			c -= 32;
		}
	}
	return (c);
}

char	get_alphabet_odd(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		if(c >= 'a' && c <= 'z')
		{
			c -= 32;
		}
	}
	return (c);
}

int main(void)
{
	char *word = "abcdefghijklmnopqrstuvwxyz";
	
	printf("\n");
	printf("The Alphabet : %s\n\n", word);
	char *str = ft_strmapi(word, &get_alphabet_even);
	
	printf("Capitalizing alphabet using ft_strmapi(unsigned int i, char c) based on even and odd position of the alphabet\n\n");

	printf("Even Alphabet : %s\n", str);
	free(str);

	str = ft_strmapi(word, &get_alphabet_odd);
	printf("Odd Alphabet : %s\n\n PASSED", str);
	free(str);
	return (0);
}
