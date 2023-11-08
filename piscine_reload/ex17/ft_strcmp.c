
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main ()
{
    printf("Result: %d", ft_strcmp("hell", "hello"));
    return 0;
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] || s2[i])
    {
        if (s1[i] != s2[i])
        {
            return (0);
        }
        i++;
    }
    return (1);
}