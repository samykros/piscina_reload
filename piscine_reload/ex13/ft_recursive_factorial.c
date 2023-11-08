
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main ()
{
    printf("Nbr: %d", ft_recursive_factorial(5));
    return 0;
}

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return 0;
    } 
    else if (nb == 0 || nb == 1)
    {
        return 1;
    }
    else
    {
        return nb * ft_recursive_factorial(nb - 1);
    }
}

/*
int nbr = 1;
int ft_recursive_factorial(int nb)
{
    if (nb > 1)
    {
        nbr = nbr * nb;
        ft_recursive_factorial(nb - 1);
    }
    return nbr;
}
*/