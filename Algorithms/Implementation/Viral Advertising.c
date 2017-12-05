#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,p=5,t=0;
    scanf("%d",&n);
    for(int i=1;i<n+1;i++)
    {
        p=floor(p/2);
        t=t+p;
        p=3*p;
    }
    printf("%d",t);
    return 0;
}
