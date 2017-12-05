#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int *h = malloc(sizeof(int) * 26);
    for(int h_i = 0; h_i < 26; h_i++){
       scanf("%d",&h[h_i]);
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    scanf("%s",word);
    int max=0,ht;
    for(int i=0;i<strlen(word);i++)
    {
        ht=h[(int)word[i]-97];
        if(ht>max)
            max=ht;
    }
    printf("%d",max*strlen(word));
    return 0;
}
