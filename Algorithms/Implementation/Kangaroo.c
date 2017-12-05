#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

 int kangaroo(int x1, int v1, int x2, int v2) {
    if(x2>x1&&v2>v1)
        return 0;
     /*else
     {
         int y2=0,y1=0,d1=x1+y1*v1,d2=x2+y2*v2;
         while(d1!=d2)
         {
             y1++;
             y2++;
         }
         if(y1==y2&&d1==d2)
             return 5;
         else
             return 0;
     }*/
     if(v1-v2==0)
         return 0;
     float c = (x2-x1)/(float)(v1-v2);
     int d = (x2-x1)/(v1-v2);
     if(c==d)
         return 5;
     else 
         return 0;
}

int main() {
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    int result = kangaroo(x1, v1, x2, v2);
    if(result==5)
    printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
