

void ft_ft(int *nbr);

int main ()
{
    int nb = 40;
    int *ptr = nb;
    
    printf("Result: %d", ft_ft(ptr));
}

void ft_ft(int *nbr)
{
    *nbr = 42;
}