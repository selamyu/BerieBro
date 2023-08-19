#include <stdio.h>

int isSquare(int n){
 
    for (int i = 0; i *i <= n; i++)
    {
        if (i*i==n)
        {
            return 1;
        } 
    }
    return 0;    
}


int main()
{
    int n = 100;
    printf("%d", isSquare(n));
    return 0;
}
