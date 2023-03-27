#include <stdio.h>

int allValuesTheSame(int a[ ], int len){
    for (int i = 0; i < len; i++)
    {
       if (a[i] != a[0])
       {
        return 0;
       } 
    }
    return 1;   
}

int main(){
    int a[] = {10,10,10,10,10,10,10};
    printf("%d", allValuesTheSame(a, 7));
    return 0;
}