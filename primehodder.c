#include <stdio.h>

int isHodder(int n){
    if (n == 3){
        return 1;
    }else if (n<=2){
        return 0;
    }
    for(int i = 2; i < n/2; i++){
        if (n % i ==0){
            return 0;
        } 
    }
    n =n+1;
    while (n>2)
    {
        n/=2;
        if(n % 2 != 0){
            return 0;
        }
    }
    return 1;   
}

int main(){
    int n = 127;
    printf("%d", isHodder(n));
    return 0;
}