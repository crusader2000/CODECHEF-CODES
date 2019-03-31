#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,c;
	scanf("%d %d",&n,&c);
	if(n<=1000)
	{
		int count=1;
		while(n--)
		{
			printf("1 %d\n",count);
			fflush(stdout);
			int t;
			scanf("%d",&t);
			if(t==0)
				count++;
			else
				break;
		}
		printf("3 %d\n",count);
		fflush(stdout);
	}
	else
	{
		int k=1000,lo=0,hi=k;
		while(k)
		{
			while(1)
			{
				if(k>n)
				{
					flag=1;
					k==n;
				}
				flag=1;
				printf("1 %d\n",k);
				fflush(stdout);
				int t;
				scanf("%d",&t);
				if(t==0)
					k+=1000
				else if(flag && t)
				{
					ans=k;
					break;
				}
				else if()
					
			}
		k/=10;
	}
		//printf("3 %d\n",lo);
	fflush(stdout);
}
}
