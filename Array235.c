#include <stdio.h>

int is235Array(int a[ ], int len){
    int c2=0, c3=0, c5=0, cc=0;
    
    for (int i = 0; i < len; i++)
    {
        if (a[i]%2==0){
            c2++;
        }
        if (a[i]%3==0){
            c3++;
        }
        if (a[i]%5==0){
            c5++;
        }
        if (a[i]%2!=0 && a[i]%3!=0 && a[i]%5!=0){
            cc++;
        } 
    }

    if (c2+c3+c5+cc==len){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int arr[] = {2, 3, 6, 7, 11};
    printf("%d", is235Array(arr, 5));
    return 0;
}