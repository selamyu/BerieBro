#include <stdio.h>

int is121Array(int arr[], int len) {
    int i = 0, count1 = 0, count2 = 0;

    // Count the number of 1s at the beginning
    while (arr[i] == 1 && i < len) {
        count1++;
        i++;
    }
    // Count the number of 2s after the 1s
    while (arr[i] == 2 && i < len) {
        count2++;
        i++;
    }
    // Count the number of 1s at the end
    while (arr[i] == 1 && i < len) {
        count1--;
        i++;
    }
    // If all elements have been checked and count1 is 0, then it's a 121 array
    if (i == len && count1 == 0 && count2 > 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int arr[] = {1, 1, 2, 2, 1, 1};

    printf("%d", is121Array(arr, 6));

    return 0;
}
