#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float t1=0,t2=0,t3=0,p,ne,z;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&arr[i]);
        if(arr[i]>0)
            t1++;
        else if(arr[i]<0)
            t2++;
        else
            t3++;
        
    }
        p=t1/n;
        ne=t2/n;
        z=t3/n;
    printf("%f\n",p);
     printf("%f\n",ne);
     printf("%f",z);
    return 0;
}
