#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void ft_putnbr_fd(int nbr, int fd);

int	main(void)
{
	ft_putnbr_fd(234, 1);
	printf("\n");
	ft_putnbr_fd(-126512, 1);
	printf("\n");
	ft_putnbr_fd(INT_MIN, 1);
}
