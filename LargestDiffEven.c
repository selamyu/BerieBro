#include <stdio.h>
int largestDifferenceOfEvens(int a[], int len)
{
    int min = 0;
    int max = 0;
    int count = 0;

    for (int i = 0; i<len; i++)
    {
        if (a[i] % 2 ==0)
        {
            if (count == 0)
            {
                min = a[i];
                max = a[i];
            }
            else if (a[i] < min)
            {
                min = a[i];
            }
            else if (a[i] > max)
            {
                max = a[i];
            }
            count++; 
        } 
    }
    if (count < 2)
    {
        return -1;
    }else{
        return max - min;
    }   
}

int main(){
    int a[] = {1, 2, 1, 2, 1, 4, 1, 6, 4};
    int len = 9;

    int ar[3] = {1,4,20};
    int len2 =3;
    printf("%d\n", largestDifferenceOfEvens(a, len));
    printf("%d", largestDifferenceOfEvens(ar, len2));
    return 0;
}
