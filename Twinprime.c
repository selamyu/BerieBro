#include <stdio.h>

int isPrime(int n){
    for (int i = 2; i <= n/2; i++)
    {
       if (n%i==0)   //&& ((n-2)%i != 0 || (n+2) % i != 0)
       {
        return 0;
       } 
    }
    return 1;  
}

int isTwinPrime(int n){
    if (isPrime(n)&& (isPrime(n-2) || isPrime(n+2)))
    {
        return 1;
    }
    else{
        return 0;
    }   
}

int main(){
    int n = 11;
    printf("%d", isTwinPrime(n));
    return 0;
}