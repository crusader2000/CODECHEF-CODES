#include<stdio.h>

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
		int lo=1,hi=n,mid=(lo+hi)/3;
		while(1)
		{
			mid=(lo+hi)/3;
			printf("1 %d\n",mid);
			fflush(stdout);
			int t;
			scanf("%d",&t);
			if(t==1)
				{hi=mid;
				break;}
			else
			{}
		}
		while(hi>=lo && mid!=1)
		{
			mid=(lo+hi)/2;
			printf("1 %d\n",mid);
			fflush(stdout);
			int t;
			scanf("%d",&t);
			if(t==1)
			{
				printf("2\n");
				fflush(stdout);
				hi=mid-1;
				printf("1 %d\n",3*mid/4);
				fflush(stdout);
				scanf("%d",&t);
				if(t==0)
					lo=3*mid/4+1;
				else
				{
					hi=3*mid/4-1;
					printf("2\n");
					fflush(stdout);
				}
			
			}
			else
			{
				lo=mid+1;
			}
}
		printf("3 %d\n",mid+1);
		fflush(stdout);
	}
}