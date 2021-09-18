#include <unistd.h>
#include <stdio.h>

void ft_putstr_fd(char *s, int fd);

int main (void)
{
	char word[] = "aesha is awesome";
	ft_putstr_fd(word, 1);

	return (0);
}
