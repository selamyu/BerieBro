#include <stdio.h>

int isComplete(int a[ ], int len){
    int even = 0, square=0, sum=0;
    for (int i = 0; i < len; i++)
    {
        if (a[i]%2==0)
        {
           even = 1;
        }   
    }
    for (int i = 0; i*i < len; i++)
    {
        if (i*i==a[i])
        {
            square = 1;
        } 
    }
    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
           if (a[i]+a[j]==8 && i!=j)
           {
                sum = 1;
           } 
        } 
    }
    
    if (even, square, sum)
    {
        return 1;
    }
    return 0;   
}

int main(){
    int a[] = {36, -28};
    printf("%d", isComplete(a, 4));
}