#include <stdio.h>

int isConsectiveFactored(int n){
    for (int i = 2; i*(i+1) <=n; i++)
    {
        int j= i+1;
        if (n % i == 0 && n % j == 0)
        {
            return 1;
        }
        
    }
    return 0;
}

int main(){
    int n = 100;
    printf("%d", isConsectiveFactored(n));
    return 0;
}