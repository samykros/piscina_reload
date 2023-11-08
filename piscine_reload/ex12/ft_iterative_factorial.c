
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main ()
{
    printf("Nbr: %d", ft_iterative_factorial(5));
    return 0;
}

int ft_iterative_factorial(int nb)
{
    int nbr = 1;

    while (nb > 1)
    {
        nbr = nbr * nb;
        nb--;
    }
    return nbr;
}