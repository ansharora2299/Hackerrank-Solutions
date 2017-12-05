#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sockMerchant(int n, int* ar) {
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        int a=1;
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]!=0)
            if(ar[i]==ar[j])
            {
                ar[j]=0;
                a++;
            }
            }
        c=c+(a/2);
    }
    return c;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = sockMerchant(n, ar);
    printf("%d\n", result);
    return 0;
}
