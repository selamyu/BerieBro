#include <stdio.h>
int isTriangular(int n){
    int i = 1;
    int sum = 0;

    while (sum < n)
    {
        sum = sum+i;
        i++;
    }
    if (sum==n)
    {
        return 1;
    }else{
        return 0;
    }   
}

int main(){
    int n = 15;
    printf("%d", isTriangular(n));
    return 0;
}