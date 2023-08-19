#include <stdio.h>

int Secondmax(int arr[], int len){
    int Fmax = arr[0];
    int Smax = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > Fmax)
        {
            Smax = Fmax;
            Fmax = arr[i];
        }
        else if (arr[i] > Smax && arr[i] != Fmax)
        {
            Smax = arr[i];
        }  
    }
    return Smax; 
}

int main(){
    int arr[] = {1,4,8,20,34,26,80,100};
    
    printf("%d", Secondmax(arr, 8));
    return 0;
}