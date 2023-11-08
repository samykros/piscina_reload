
#include <stdio.h>

int ft_count_if(char **tab, int(*f)(char*));
int ft_condition(char* str);

int main()
{
    char *arr[] = {"apple", "banana", "cherry", "date", "elderberry", NULL};
    int count = ft_count_if(arr, ft_condition);

    printf("Number of elements that contain 'a': %d\n", count);
    return 0;
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
        {
			count++;
        }
		i++;
	}
	return (count);
}

int ft_condition(char* str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == 'a')
        {
            return 1;
        }
        i++;
    }
    return 0;
}