#include <stdio.h>

int isComplete(int a[ ], int len){
    int count1 = 0, count2=0, count3=0;
    for (int i = 0; i < len; i++)
    {
        if (a[i]%2==0)
        {
           count1 = 1;
        }   
    }
    for (int i = 0; i*i < len; i++)
    {
        if (i*i==a[i])
        {
            count2 = 1;
        } 
    }
    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
           if (a[i]+a[j]==8 && i!=j)
           {
                count3 = 1;
           } 
        } 
    }
    
    if (count1, count2, count3)
    {
        return 1;
    }
    return 0;   
}

int main(){
    int a[] = {36, -28};
    printf("%d", isComplete(a, 4));
}