#include<stdio.h>
	int getsum(int N);
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int n;
		scanf("%d",&n);
		int 	ans=getsum(n);
		printf("%d\n",ans);
	}
}
int getsum(int N)
{int sum=0;
	while(N>0)
	{
		sum+=(N%10);
		N/=10;
	}
	return sum;
}

