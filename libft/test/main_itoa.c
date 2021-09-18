#include <stdio.h>
#include <string.h>
#include <limits.h>

char *ft_itoa(int n);

int	main(void)
{
	int max  = INT_MAX;
   	int min = INT_MIN;
	int d = -256;
	//int p = 912;
	//int nbr = 10;

	//int nb = {d, p, nbr, 3};
	//for (int i = 0; i < nb; i++)
	//{
		printf("number %d convert to ASCII : %s\n", d, ft_itoa(d));
	//}
	printf("INT_MIN %d convert to ASCII : %s\n", min , ft_itoa(min));
	printf("INT_MAX %d convert to ASCII : %s\n",max, ft_itoa(max));
	return (0);
}
