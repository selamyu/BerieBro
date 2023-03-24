#include <stdio.h>

int * computeHMS(int seconds) {
    static int result[3];
    result[0] = seconds / 3600;
    seconds %= 3600;
    result[1] = seconds / 60;
    result[2] = seconds % 60;
    return result;
}

int main() {
    int totalSeconds = 9876;
    int *result = computeHMS(totalSeconds);
    printf("%d seconds = %d hours, %d minutes, %d seconds\n", totalSeconds, result[0], result[1], result[2]);
    return 0;
}
