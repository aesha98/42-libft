#include <stdlib.h>

static int get_len(int n)
{
	int i;
	int remainder;

	i = 0;
	remainder = 10;
	if (n <= 0)
		++i;
	while (n != 0)
	{
		++i;
		n = n / remainder;
	}
	return (i);
}
int absolute_val(int n)
{
	if(n < 0)
		return (-n);
	return (n);
}
char	*ft_itoa(int n)
{
	char	*str;
	int		base_ten;
	int		i;
	int 	len;

	base_ten = 10;
	len = get_len(n);
	i = 0;
	str = (char *)malloc(len);
	if (n < 0)
		*(str + i) = '-';
	else if (n == 0)
		*(str + i) = '0';
	while (len != 0 && n)
	{
		len--;
		*(str + len) = absolute_val(n % base_ten) + '0';
		n = n / base_ten;
	}
	return (str);
}
