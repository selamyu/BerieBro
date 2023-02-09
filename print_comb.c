#include <unistd.h>
#include <stdio.h>

void combnum(char a, char b, char c)
{
     write(1, &a, 1);
     write(1, &b, 1);
     write(1, &c, 1);
    if (a != '7' || b != '8' || c != '9')
    {
       write(1, ", ", 2);
    }   
}

void ft_print_comb(void)
{
    int x;
    int y;
    int z;
    
    x = '0';
    while (x <= '7')
    {
       y = x + 1;
       while (y <= '8')
       {
            z = y + 1;
            while (z <= '9')
            {
                combnum(x, y, z);         // write(1, &x, 1); write(1, &y, 1);write(1, &z, 1);
                z++;                      //if(x != 7) --> write(1, ", ", 2)
            }
            y++;   
       }
       x++;
    }  
}

int main()
{
    ft_print_comb();
    return(0);
}
