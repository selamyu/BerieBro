#include <stdio.h>

int areAnagrams(char a1[], char a2[], int len){
    if (len==0)
    {
        return 0;
    }
    for (int i = 0; i < len; i++)
    {
        int count=0;
        for (int j = 0; j < len; j++)
        {
            if (a1[i] == a2[j])
            {
                count++;
            }  
        }
        if (count==0)
        {
            return 0;
        }else if (count>=1)
        {
            for (int k = 0; k < len; k++)
            {
                if (i == k)
                {
                    count--;
                } 
            }
            if (count != 0)
            {
                return 0;
            }  
        }
        count=0;  
    }
    return 1;  
}

int main(){
    char ar1[] = {'s', 'i', 't'};
    char ar2[] = {'i', 't', 's'};
    int len = 3;

    printf("%d", areAnagrams(ar1, ar2, len));
    return 0;
}