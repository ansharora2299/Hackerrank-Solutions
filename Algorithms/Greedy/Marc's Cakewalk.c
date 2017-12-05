#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,swap; 
    long int miles=0;
    scanf("%d",&n);
    int *calories = malloc(sizeof(int) * n);
    for(int calories_i = 0; calories_i < n; calories_i++){
       scanf("%d",&calories[calories_i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(calories[j]<calories[j+1])
            {
                swap=calories[j+1];
                calories[j+1]=calories[j];
                calories[j]=swap;
            }
        }
    }
    for(int i=0;i<n;i++)
        miles+=(calories[i]*pow(2,i));
    printf("%ld",miles);
       // printf("%d ",calories[i]);
    return 0;
}
