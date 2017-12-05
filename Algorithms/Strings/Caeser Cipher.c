#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int k; 
    scanf("%d",&k);
    k=k%26;
    for(int i=0;i<=n;i++)
    {
        if(isalpha(s[i]))
        {
            if(islower(s[i]))
            {
            if((int)s[i]+k>122)
            s[i]=((int)s[i]+k-26);
        else
            s[i]=((int)s[i]+k);
        }
        else
        {
            if((int)s[i]+k>90)
            s[i]=((int)s[i]+k-26);
        else
            s[i]=((int)s[i]+k);
        }
        }
    }
    puts(s);
    return 0;
}

