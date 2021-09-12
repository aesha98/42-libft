int ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    sign = 1;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    {
        i++;
    }

    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
    }
    
    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result = str[i] - '0';
        i++;
    }
    
    return (result * sign);
}