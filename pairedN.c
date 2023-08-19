#include <stdio.h>

int pairedN(int a1[], int n, int len)
{
    int i, j;
    int count = 0;
    for (i = 0; i < len - 1; i++)
    {
        for (j = i+1; j < len; j++)
        {
            if (a1[i] + a1[j] == n && i + j == n)
            {
                count++;
            }  
        }   
    }
    if (count == 0)
    {
        return 0;
    }
    else{
        return 1;
    }  
}

int main(){
    int arr[5] = {1, 2, 1, 6, 4,};
    printf("%d", pairedN(arr, 3, 5));
    return 0;
}