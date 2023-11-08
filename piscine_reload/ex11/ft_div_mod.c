
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main ()
{
    int a = 15;
    int b = 7;
    int div = 0;
    int mod = 0;

    ft_div_mod(a, b, &div, &mod);
    printf("Div: %d Mod: %d", div, mod);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}