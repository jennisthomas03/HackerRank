/*
You are given a list of  people who are attending ACM-ICPC World Finals. Each of them are either well versed in a topic or they are not. Find out the maximum number of topics a 2-person team can know. And also find out how many teams can know that maximum number of topics.

Note Suppose a, b, and c are three different people, then (a,b) and (b,c) are counted as two different teams.
*/

#include <stdio.h>
#include<stdbool.h>
int main()
{
      
       int N, M, i,j,max_topic,teams,topic,x;
       scanf("%d %d",&N, &M);
       char str[N][500];
        for(i=0; i<N; i++)
        {
                scanf("%s",str[i]);
        }
        if(!(2 <= N && N <= 500))
            return 0;
        if(!(1 <= M && M<= 500))
            return 0;
        max_topic=0;
        teams=0;

        for(i=0;i<N;i++)
                for(j=i+1;j<N;j++)
                {
                        topic=0;
                        x=0;
                        while(x<M)
                        {
                                if(str[i][x]=='1' || str[j][x]=='1')
                                        topic++;

                                x++;
                        }
                        if(topic==max_topic)
                                teams++;
                        if(topic>max_topic)
                        {
                                teams=1;
                                max_topic=topic;
                        }
                }
        printf("%d\n%d",max_topic,teams);



        return 0;
}

