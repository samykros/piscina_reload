

void ft_print_numbers(void);

int main ()
{
    ft_print_numbers();
    return 0;
}

void ft_print_numbers(void)
{
    write(1, "0123456789", 10);
}