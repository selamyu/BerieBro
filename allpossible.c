#include <stdio.h>

#include <stdio.h>

int isAllPossibilities(int arr[], int n) {
    int i, count[100];
    for (i = 0; i < n; i++) {
        count[i] = 0;
    }
    for (i = 0; i < n; i++) {
        if (arr[i] < 0 || arr[i] >= n) {
            return 0;
        }
        count[arr[i]]++;
    }
    for (i = 0; i < n; i++) {
        if (count[i] != 1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[] = {1, 0, 3};
    printf("%d", isAllPossibilities(arr, 4));
    return 0;
}
