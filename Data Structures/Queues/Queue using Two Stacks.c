#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
scanf("%d",&n);
int q[n],f=-1,r=-1,p;
void insert(int x)
{ if(r==-1)
    f=r=0;
 else
     r++;
    q[r]=x;
    return;
}
void delete()
{
    p=q[f];
    if(f==r)
      f=r=-1;
    else
        f++;
    return;
}
void print()
{
    printf("%d\n",q[f]);
}
    
for(int i=0;i<n;i++)
{
    int a,b;
    scanf("%d",&a);
    switch(a)
    {
        case 1:scanf("%d",&b);
            insert(b);
            break;
        case 2:delete();
            break;
        case 3:print();
            break;
    }
}       
    return 0;
}
