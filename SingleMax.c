#include <stdio.h>
int singlemax(int a[], int len)
{
    int max = a[0];
    int count = 1;
    for (int i = 0; i < len; i++)
    {
       if (a[i] > max)
       {
            max = a[i];
            count = 1;
       }
       else if (a[i] == max)
       {
        count++;
       }  
    }

    if (count == 1)
    {
        return 1;
    }else{
        return 0;
    }    
}


int main()
{
    int arr1[5] = {3,4,5,7,7};
    int len = 5;
    printf("%d", singlemax(arr1, 5));
    return 0;
}