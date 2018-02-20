/*
John has discovered various rocks. Each rock is composed of various elements, and each element is represented by a lower-case Latin letter from 'a' to 'z'. An element can be present multiple times in a rock. An element is called a gem-element if it occurs at least once in each of the rocks.

Given the list of  rocks with their compositions, display the number of gem-elements that exist in those rocks.
*/


#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int count=0;
int find_char_in_array(char p[],char a)
{
	int i,flag=0;
	for(i=0;i<strlen(p);i++)
	{
		if(p[i]==a)
		{
			flag=1;
			return flag;
		}
		else
			flag=0;
	}
	return flag;
}
void intersectionOfCharArrays()
{
	int i=0,j=0,k=0,flag,num,flag1=0;
	
	char *cptr[100],c;
	int  prs[26]={0};
	
	scanf("%d",&num);
	for(i=0; i<num; i++)
	{
		cptr[i] = (char*) malloc(sizeof(char) *100);
	
		scanf("%s",cptr[i]);
	}
	
	for(i=0; i<strlen(cptr[0]); i++)
	{
		c=cptr[0][i];
		flag1=0;
		for(j=1;j<num;j++)
		{
			flag=0;
			flag=find_char_in_array(cptr[j],c);
			if (flag==1)
			{
				if( j !=  num-1 )
					continue;
				else
					flag1=1;
			}
			else
				break;
		}
		if(flag1==1)
		{
			prs[c-97]=1;
		}

		
		
	}

	
	for(i=0; i<26; i++)
	{
		if(prs[i]==1)
            count++;
	}
    
}
int main()
{
	intersectionOfCharArrays();
	printf("%d", count);
}
