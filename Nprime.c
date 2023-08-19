#include <stdio.h>
int isNPrimeable(int a[], int len, int n){
    for (int i = 0; i < len; i++)
    {
        int num = a[i]+n;
        for (int j = 2; j < num; j++)
        {
            if (num%j==0)
            {
                return 0;
            }
            
        }  
    }
    return 1;    
}

int main(){
    int arr1[] = {5, 15, 26};
    printf("%d", isNPrimeable(arr1, 3, 2));
    return 0;
}