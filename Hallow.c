#include <stdio.h>

int isHollow(int a[ ], int len){
    int i=0, c1=0, c2=0;
  
    while (a[i]>0 && i<len)
    {
        c1++;
        i++;
    }

    while (a[i]==0 && i<len)
    {
        c2++;
        i++;
    }
        
    while (a[i]>0 && i<len)
    {
        c1--;
        i++;
    } 
    
    if (i==len && c1==0 && c2>=3)
    {
        return 1;
    }
    else{
        return 0;
    } 
}

int main(){
    int a[] = {0,0,0};
    printf("%d", isHollow(a, 3));
    return 0;
}