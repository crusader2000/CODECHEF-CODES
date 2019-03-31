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
		int lo=0,hi=n,mid;
		while((hi-lo)>1)
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
			}
			printf("1 %d\n",mid-1);
			fflush(stdout);
			int f;
			scanf("%d",&f);
			if(f==1)
			{
				printf("2\n");
				fflush(stdout);
			}
			if(t==1 && (mid==0 || f==0))
			{
				lo=mid;
				break;
			}
			else if(t==1)
				hi=mid-1;
			else
				lo=mid+1;
		}
		printf("3 %d\n",lo+1);
		fflush(stdout);
	}
}
