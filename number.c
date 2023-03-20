#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(void)
{
    int n;
    n = '9';
    while (n >= '0')
    {
        write(1, &n, 1);
        n--;
    }  
}

int main()
{
    ft_print_numbers();
    return(0);
}