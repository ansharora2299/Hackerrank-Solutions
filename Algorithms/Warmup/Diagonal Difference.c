#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sump=0,sums=0,diff=0; 
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
          
          scanf("%d",&a[i][j]);
       }
    }
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
          if(i==j){
              sump+=a[i][j];}
       }
    }int j=n-1;
    for(int i=0;i<n;i++){
       // for(int j=n-1;j>=0){
            sums+=a[i][j];
            j--;
        continue;
      
    }
    diff=abs(sump-sums);
    printf("%d",diff);
    return 0;
}
