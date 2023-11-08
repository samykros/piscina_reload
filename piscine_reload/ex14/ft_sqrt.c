
#include <stdio.h>

int ft_sqrt(int nb);

int main ()
{
    printf("Nbr: %d", ft_sqrt(16));
    return 0;
}

int ft_sqrt(int nb)
{
    int nbr = 1;
    
    if (nb > 0)
    {
        while ((nbr * nbr) != nb)
        {
            nbr++;
        } 
    }
    return nbr;
}