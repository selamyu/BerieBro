#include <stdio.h>

// int loopSum(int a[], int len, int n){
//     int sum = 0;
//     if (len > n)
//     {
//         for (int j = 0; j < n; j++){
//             sum += a[j];
//         }  
//     }
//     else if(len == n){
//         for (int i = 0; i < len; i++){
//             sum += a[i];
//         }
//     }
        
//     else if (len < n)
//     {
//         for (int k = 0; k < n; k++)
//         {
//             sum += a[k % len];        
//         } 
//     }    
//     return sum;  
// }

int loopSum(int arr[], int size, int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i % size];
    }
    return sum;
}

int main(){
    int arr[] = {3};
    int n = 5;
    printf("%d", loopSum(arr, 1, n));
    return 0;
}