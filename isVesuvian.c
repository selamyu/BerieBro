#include <stdio.h>
#include <math.h>

int isPerfectSquare(int n) {
    int root = sqrt(n);
    return (root * root == n);
}

int isVesuvian(int n) {
    int i, j;

    for (i = 0; i * i < n; i++) {
        for (j = i + 1; j * j < n; j++) {
            int sum = i * i + j * j;
            if (sum >= n) {
                break;
            }
            int diff = n - sum;
            if (isPerfectSquare(diff) && diff != i * i && diff != j * j) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    int n = 40;
    int is_vesuvian = isVesuvian(n);
    printf("%d is %svesuvian\n", n, is_vesuvian ? "" : "not ");
    return 0;
}