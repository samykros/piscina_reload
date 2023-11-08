
// Orden ascii significa que lo utilizo como si fuera orden alfabetico pero en ascii?
#include <unistd.h>

void ft_swap(char **str1, char **str2);
void ft_sort_params(int argc, char *str[]);
int ft_strcmp(char *s1, char *s2);

int main(int argc, char *argv[])
{
   int i;
   int j;

   i = 1;
   j = 0;

   if(argc > 1)
   {
        ft_sort_params(argc, argv);
        while(argv[i])
        {
            j = 0;
            while(argv[i][j])
            {
                write(1, &argv[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
   }
   return (0);
}

void ft_swap(char **str1, char **str2)
{
    int i;
    char* temp;

    i = 0;
    temp = str1[i];
    str1[i] = str2[i];
    str2[i] = temp;
    /*
    char* temp = *str1;
    *str1 = *str2;
    *str2 = temp;
    */
}

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while(s1[i] && s2[i])
    {
        if (s1[i] > s2[i])
            return (1);
        i++;
    }
    return (0);
}

void ft_sort_params(int argc, char *str[])
{
    int i;
    int sorted = 0;

    while(!sorted)
    {
        sorted = 1;
        i = 1; // no entiendo porqu si i = 0 solo imprime los argumentos, esperaria que utilizara el a.out como otro argumento
        while(argc > 1)
        {
            if (ft_strcmp(str[i], str[i + 1]) == 1)
            {
                ft_swap(&str[i], &str[i + 1]);
                sorted = 0;
            }
            argc--;
        }
        i++;
    }
}