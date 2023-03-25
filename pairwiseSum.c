#include <stdio.h>

int* pairwiseSum(int a[], int len) {
    static int result[1000]; // using a static array to store the pairwise sums
    for (int i = 0; i < len/2; i++) {
        result[i] = a[2*i] + a[2*i+1];
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int* result = pairwiseSum(arr, n);
    for (int i = 0; i < n/2; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
