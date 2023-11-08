
#include <stdio.h>

void ft_swap(int *a, int *b);

int main ()
{
    int a = 1;
    int b = 2;

    printf("A: %d B: %d\n", a, b);
    ft_swap(&a, &b);
    printf("A: %d B: %d\n", a, b);   
}

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}