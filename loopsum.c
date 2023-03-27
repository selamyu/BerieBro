#include <stdio.h>

int loopSum(int a[], int len, int n){
    int sum = 0;
    if (len > n)
    {
        for (int j = 0; j < n; j++){
            sum += a[j];
        }  
    }
    else if(len == n){
        for (int i = 0; i < len; i++){
            sum += a[i];
        }
    }
        
    else if (len < n)
    {
        for (int k = 0; k < n; k++)
        {
            sum += a[k % len];        
        } 
    }    
    return sum;  
}

int main(){
    int arr[] = {3, 4,6,8};
    int n = 3;
    printf("%d", loopSum(arr, 4, n));
    return 0;
}