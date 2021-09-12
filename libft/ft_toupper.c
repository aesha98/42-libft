int ft_toupper(int c)
{
    if (!(c >= 'A' && c <= 'Z'))
    {
        return (c - 32);
    }

    return (c);
}