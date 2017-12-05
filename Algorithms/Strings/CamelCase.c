#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(100240 * sizeof(char));
    scanf("%s",s);
     int i=0,c=1;
    while(s[i]!='\0')
        {
        i++;
            char ch = s[i];
            if(ch>='A'&&ch<='Z')
                c++;
        }
    printf("%d",c);
    return 0;
}


