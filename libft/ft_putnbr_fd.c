#include <unistd.h>

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static void print_number(int nbr , int fd)
{
	char base[] = "0123456789";
	char num;
	int remainder;

	if (nbr / 10 != 0)
		print_number((nbr / 10), fd);
	remainder = nbr % 10;
	if (remainder < 0)
		remainder = -remainder;
	num = base[remainder];
	ft_putchar_fd(num, fd);	
}

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr < 0)
		ft_putchar_fd('-',fd);
	print_number(nbr, fd);
}
