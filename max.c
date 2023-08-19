#include <stdio.h>

//we can find the mam and min nums
int max(int num1, int num2){
    int result;
    if (num1 > num2)
    {
        result = num1;
    }else{
        result = num2;
    }
    return result;
}

int main(){
    printf("Here is the result: ");
    printf("%d", max(5,6));
    return 0;
}