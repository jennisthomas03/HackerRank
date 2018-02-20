#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,i,y,num,flag=0;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&num);
        flag=0;
        for(i=num;i>=0;i--)
        {
            y=num-i;
            if(y%5==0 && i%3==0)
            {
                while(i>0)
                {
                    printf("5");
                    i--;
                }
                while(y>0)
                {
                    printf("3");
                    y--;
                }
                printf("\n");
                flag=1;
                break;
            }   
                
        }
        if(flag==0)
            printf("-1\n");
        t--;
     }
        
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
