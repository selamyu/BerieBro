#include <stdio.h>

int sameNumberOfFactors(int n1, int n2){
    int count1=0, count2=0;

    if (n1<0 || n2 <0)
    {
        return -1;
    }
    
    for (int i = 1; i <= n1; i++)
    {
        if (n1%i==0)
        {
            count1++;
        } 
    }
    for (int j = 1; j <= n2; j++)
    {
        if (n2%j==0)
        {
            count2++;
        } 
    }

    if (count1==count2)
    {
        return 1;
    }else{
        return 0;
    }   
}

int main(){
    int n1 = 0;
    int n2 = 0;
    printf("%d", sameNumberOfFactors(n1, n2));
    return 0;
}