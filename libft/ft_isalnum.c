int ft_isalnum(int c)
{
    if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') 
    {
        return (c);
    }
    else if (c >= '0' && c <= '9')
    {
        return (c);
    }
    return(0);   
}