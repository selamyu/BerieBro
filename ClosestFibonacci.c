#include <stdio.h>

// int closestFibonacci(int n){
//     if (n==1||n==2||n==3)
//     {
//     return n;
//     }
//     else if (n<1)
//     {
//         return 0;
//     }
//     else{
//         int x1 = 1;
//         int x2 = 2;
//         int fibo = 0;
//         while (fibo <= n)
//         {
//             fibo = x1 + x2;
//             x1 = x2;
//             x2 = fibo;
//         }
//         return x1;
//     }
// }

int closestFibonacci(int n) {
    int prev = 0, curr = 1;
    while (curr <= n) {
        int temp = curr;
        curr += prev;
        prev = temp;
    }
    return prev;
}

int main(){
    int n = 33;
    printf("%d", closestFibonacci(n));
    return 0;
}