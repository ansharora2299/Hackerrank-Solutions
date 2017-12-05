#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int arr[5],i,c,r1,r2;
    for(i = 0;i < 5;i++){
       scanf("%ld",&arr[i]);
    }
    c=arr[0];
        for(i = 0;i < 5;i++){
         if(c>arr[i])
             c=arr[i];
        }
    r1=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]-c;
    c=arr[0];
        for(i = 0;i < 5;i++){
         if(c<arr[i])
             c=arr[i];
        }
    r2=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]-c;
    printf("%ld %ld",r2,r1);
    return 0;
}
