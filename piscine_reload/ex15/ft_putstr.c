
#include <unistd.h>

void ft_putstr(char *str);

int main ()
{
    ft_putstr("hello world");
    return 0;
}

void ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}