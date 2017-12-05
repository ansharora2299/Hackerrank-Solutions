#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        int h=1;
        if(n==0)
            printf("%d\n",h);
        else if(n==1)
            printf("%d\n",2*h);
        else
        {
        for (int i=0;i<n/2;i++)
        {
            h=2*h;
            h++;
        }
            if(n%2!=0)
                h=2*h;
            printf("%d\n",h);
        }    
    }
    return 0;
}
