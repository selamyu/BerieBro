#include <stdio.h>

int isMartian(int a[ ], int len){
    int c1=0, c2=0;
    for (int i = 0; i < len-1; i++)
    {
        if (a[i]==a[i+1]){
            return 0;
        }    
    }
    for (int i = 0; i < len; i++)
    {
        if (a[i]==1)
        {
            c1++;
        }else if (a[i]==2)
        {
            c2++;
        }  
    }
    if (c1 > c2)
    {
        return 1;
    }else{
        return 0;
    }  
}

int main(){
    int arr[] = {1};
    printf("%d", isMartian(arr, 1));
    return 0; 
}