#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int t; 
    scanf("%d %d",&n,&t);
    int width[n];
    for(int width_i = 0; width_i < n; width_i++){
       scanf("%d",&width[width_i]);
    }
    for(int a0 = 0; a0 < t; a0++){
        int i; 
        int j;
        int p =3;
        scanf("%d %d",&i,&j);
        for(int k=i;k<=j;k++)
        {
            if(width[k]<=p)
                p=width[k];
        }
        if(p==3)
            printf("3\n");
        else if(p==2)
            printf("2\n");
        else
            printf("1\n");
    }
    return 0;
}


