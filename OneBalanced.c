#include <stdio.h>

int isOneBalanced(int arr[], int size) {
    int i = 0;
    while (i < size && arr[i] == 1) {
        i++;
    }
    while (i < size && arr[i] != 1) {
        i++;
    }
    while (i < size && arr[i] == 1) {
        i++;
    }
    if (i== size)
    {
        return 1;
    }else{
        return 0;
    }
}

int main() {
    int arr1[] = {1, 1, 0, 1, 1};
    int arr2[] = {1, 0, 1, 1, 0, 1};
    int arr3[] = {0, 1, 0, 1, 1};
    int arr4[] = {0, 1, 1, 1, 1, 1};
    
    printf("%d\n", isOneBalanced(arr1, 5)); 
    printf("%d\n", isOneBalanced(arr2, 6)); 
    printf("%d\n", isOneBalanced(arr3, 5)); 
    printf("%d\n", isOneBalanced(arr4, 6)); 
    
    return 0;
}
