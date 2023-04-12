#include <stdio.h>

int isTwinPrime(int n){
    for (int i = 2; i <= n/2; i++)
    {
       if (n%i==0)   //&& ((n-2)%i != 0 || (n+2) % i != 0)
       {
        return 0;
       } 
       else if (n%i !=0 && ((n-2)!=0 || (n+2)%i !=0))
       {
        return 1;
       } 
    } 
}

int main(){
    int n = 8;
    printf("%d", isTwinPrime(n));
    return 0;
}