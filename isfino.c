#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/* Jennis Thomas */
int isfibo(long long int num)
{
    long long int first=0,second=1,fib=0;
    if(num==1)
        return 1;
    while((fib)<=num)
    {
        fib=first+second;
        first=second;
        second=fib;
        if(fib==num)
            return 1;
               
    }
    return -1;
}
int main() {
    long long int n,i,num;
    int flag;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&num);
        flag=isfibo(num);
        if(flag==1)
            printf("IsFibo\n");
        else
            printf("IsNotFibo\n");
        
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

