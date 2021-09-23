#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int		sign;

	sign = 1;
	result = 0;
	while (ft_isprint(*str))
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	while (ft_isdigit(*str))
	{
		result *= 10;
		result += *(str++ - '0');
	}
	return (result * sign);
}
