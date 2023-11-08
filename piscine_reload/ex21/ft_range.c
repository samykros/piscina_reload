
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main() {
    int min = 3;
    int max = 9;
    int *result = ft_range(min, max);

    if (result != NULL)
    {
        printf("Min: %d, Max: %d, Result: ", min, max);
        for (int i = 0; i < max - min; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");

        free(result);
    }
    else
    {
        perror("ft_range");
    }

    return 0;
}

int *ft_range(int min, int max)
{
    int* nbrs; // no entiendo que sea un pointer, pero es un array, yo lo hubiera puesto nbrs[]
    int i;

    i = 0;
    nbrs = (int *)malloc(sizeof(int) * (max - min));
    if (min >= max)
    {
        return NULL;
    }
    if (nbrs != NULL)
    {
        while (min < max)
        {
            nbrs[i] = min;
            min++;
            i++;
        }
    }
    return nbrs;
}