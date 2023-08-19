#include <stdio.h>
int equivalentArrays(int a1[], int a2[], int len1, int len2)
{
    for (int i = 0; i < len1; i++){
        int count = 1;
        for (int j = 0; j < len2; j++){
            if (a1[i] == a2[j]){
                count = 1;
            } 
        }
        if (count == 0){
            return 0;
        }  
    }
    
     for (int i = 0; i < len2; i++)
    {
        int count = 1;
        for (int j = 0; j < len1; j++)
        {
            if (a2[i] == a1[i]){
                count = 1;
            } 
        }
        if (count == 0){
            return 0;
        }  
    }
    return 1;
}

int main(){
    int arr1[5] = {2,4,5,7,8};
    int arr2[6] = {4,5,2,8,7,9};
    int len1 = 5;
    int len2 = 6;

    printf("%d", equivalentArrays(arr1, arr2, len1, len2));
    return 0;
}