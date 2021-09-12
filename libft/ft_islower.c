int ft_islower(int ch)
{
    if (!(ch >= 'a' && ch <='z'))
    {
        return (ch + 32);
    }

    return (ch);
}