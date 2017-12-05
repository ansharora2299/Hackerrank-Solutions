#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[6][6],i,j,k=0,sum[16],max;
    for(i = 0;i< 6;i++){
       for(j = 0;j < 6;j++){
          scanf("%d",&a[i][j]);
       }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum[k]=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            k++;
        }
    }
    max=sum[0];
    for(k=0;k<16;k++)
    {
        if(sum[k]>max)
            max=sum[k];
    }
    printf("%d",max);
    return 0;
}
