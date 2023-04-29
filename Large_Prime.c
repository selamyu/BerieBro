#include <stdio.h>

int largestPrimeFactor(int num) {
    if (num <= 1) {
        return 0;
    }
    
    int largest = 2;
    
    while (num > largest) {
        if (num % largest == 0) {
            num /= largest;
        } else {
            largest++;
        }
    }
    return largest;
}

int main(){
    int num = 14;
    printf("%d", largestPrimeFactor(num));
    return 0;
}
