

void ft_is_negative(int n);

int main ()
{
    printf("Result: %c", ft_is_negative(9));
    return 0;
}

void ft_is_negative(int n)
{
    if (n < 0)
    {
        return 'N';
    }
    return 'P';
}