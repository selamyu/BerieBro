#include <stdio.h>

int largestAdjacentSum(int a[], int len){
    if (len<2)
    {
        return 0;
    }
    int largsum = a[0]+a[1];
    for (int i = 0; i < len - 1; i++)
    {
        int sum = a[i]+a[i+1];
        if (sum > largsum)
        {
            largsum = sum;
        }
        
    }
    return largsum;    
}

int main(){
    int a[] = {1,1,1,1,1,1};
    printf("%d", largestAdjacentSum(a,  6));
    return 0;
}

// this c code