

#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int main ()
{
    char* str = "str";
    char *duplicada = ft_strdup(str);

    printf("%s", duplicada);
    return 0;
}

char *ft_strdup(char *src)
{
    int i;
    char *temp;

    i = 0;
    temp = (char *)malloc(sizeof(src + 1));
    if (!temp)
		return (NULL);
    while (src[i])
    {
        temp[i] = src[i];
        i++;
    }
    temp[i] = '\0';
    return temp;
}