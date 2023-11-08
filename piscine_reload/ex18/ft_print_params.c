

#include <unistd.h>

void ft_putchar(char c);

int main (int argc, char* argv[])
{
    int i = 1;
    int j = 0;

    if (argc > 1)
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                ft_putchar(argv[i][j]);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return 0;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}
