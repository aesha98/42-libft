#include <stdio.h>
#include <unistd.h>

void	ft_endl_fd(char *s, int fd);

int main(void)
{
	char word[] = "aesha is awesome";

	ft_endl_fd(word, 1);

	return (0);
}
