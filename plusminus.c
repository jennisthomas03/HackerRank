#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float total=0,pos=0,neg=0,zer=0; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(arr[arr_i]<0)
            neg++;
        else if(arr[arr_i]>0)
            pos++;
        else
            zer++;
        total++;
    }
    printf("%f\n",(float)(pos/total));
    printf("%f\n",(float)(neg/total));
    printf("%f\n",(float)(zer/total));
    return 0;
}
