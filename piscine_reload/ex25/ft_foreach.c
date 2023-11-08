
#include <unistd.h>

void ft_foreach(int *tab, int length, void(*f)(int));
void ft_putnbr(int nb);
void ft_putchar(char c);

int main ()
{
    int tab[4] = {1, 2, 3, 4};
    ft_foreach(tab, 4, &ft_putnbr);
    return 0;
}

void ft_foreach(int *tab, int length, void(*f)(int))
{
    int i;

    i = 0;
    while (length > 0)
    {
        f(tab[i]);
        length--;
        i++;
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    else
    {
        if (nb >= 10)
        {
            ft_putnbr(nb / 10);
        }
    }
    ft_putchar(nb % 10 + '0');
}