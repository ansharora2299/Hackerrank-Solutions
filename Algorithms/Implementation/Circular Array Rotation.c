#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,k,q; 
    scanf("%d %d %d",&n,&k,&q);
    k=k%n;
    int a[n];
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int b[k];
    for(int j=0;j<k;j++)
        b[j]=a[n-k+j];
    for(int j=n-1;j>=k;j--)
        a[j]=a[j-k];
    for(int j=0;j<k;j++)
        a[j]=b[j];
    for(int a0 = 0; a0 < q; a0++){
        int m; 
        scanf("%d",&m);
        printf("%d\n",a[m]);
    }
    return 0;
}
