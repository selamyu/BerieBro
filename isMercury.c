#include <stdio.h>

int isMercurial(int a[], int len){
    int i = 0;
    while (i<len)
    {
        if (a[i]==1)
        {
            int j = i+1;
            while (j<len && a[j]!=1)
            {
                if (a[j]==3)
                {
                    return 0;
                }
                j++;
            }
            i=j;
        }else{
            i++;
        } 
    }
    return 1; 
}

int main(){
    int ar[] = {5, 1, 10, 3, 15, 1, 2, 2};

    printf("%d", isMercurial(ar, 8));
    return 0;
}