#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int main() {
   
   int size;
scanf("%d",&size);
int ar[size],i,le[size],e[size],r[size],k=0,l=0,m=0,c1=0,c2=0,c3=0;
for(i=0;i<size;i++) { 
   scanf("%d",&ar[i]); 
}
    int p=ar[0];
    for(i=0;i<size;i++){
        if(ar[i]<p){
            le[k++]=ar[i];
            c1++;}
        else if(ar[i]>p){
            r[l++]=ar[i];
            c2++;}
        else{
            e[m++]=ar[i];
            c3++;}
    }
    for(k=0;k<c1;k++)
   printf("%d ",le[k]);
    for(m=0;m<c3;m++)
   printf("%d ",e[m]);
    for(l=0;l<c2;l++)
   printf("%d ",r[l]);
   return 0;
}
