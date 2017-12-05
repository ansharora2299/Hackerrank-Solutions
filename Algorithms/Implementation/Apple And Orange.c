#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int s; 
    long int t; 
    scanf("%ld %ld",&s,&t);
    long int a; 
    long int b; 
    scanf("%ld %ld",&a,&b);
    long int m; 
    long int n; 
    scanf("%ld %ld",&m,&n);
    long int i,j,e=0;
    long int c1=0,c2=0;
     long int d[m];
     long int c[n];
        for(i=0;i<m;i++)
            scanf("%ld",&d[i]);
        for(j=0;j<n;j++)
            scanf("%ld",&c[j]);
        for(i=0;i<m;i++)
        {
            e=a+d[i];
            if(e>=s&&e<=t)
                c1++;
        }
        for(j=0;j<n;j++)
        {
            e=b+c[j];
            if(s<=e&&e<=t)
                c2++;
        }
        printf("%ld\n",c1);
        printf("%ld",c2);
      return 0;
}
