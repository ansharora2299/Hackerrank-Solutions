#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    long int n,temp; 
    long int d,i; 
    scanf("%ld %ld", &n, &d);
    long int a[n];
    for (i = 0;i < n;i++) {
       scanf("%ld",&a[i]);}
    /*for(i=1;i<=d;i++)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }*/
       for (i = d;i < n;i++)
       {
       printf("%ld ",a[i]);
       }
    for(i=0;i<d;i++)
        printf("%ld ",a[i]);
    return 0;
}
