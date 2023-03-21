#include <stdio.h>

int EvenOddLargestDiff(int arr[], int len){
    int min = 0;
    int max = 0;
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i]%2==0)
        {
            if (count==0)
            {
                max = arr[i];
            }
        
            else if (arr[i] > max)
            {
                 max = arr[i];
            } 
            count++;
        }
        
        if(arr[i]%2 != 0){
            if (count==0)
            {
                min = arr[i];
            }
            else if (arr[i] < min){
                min = arr[i];
            } 
        }
        count++; 
    }
    return max - min; 
}

int main(){
    int ar[5] = {3,2,4,8, 7};
    int len = 5;
    printf("%d", EvenOddLargestDiff(ar, len));
    return 0;
}