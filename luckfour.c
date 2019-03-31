#include<stdio.h>
int main()
{
int T;
scanf("%d",&T);
for(int t=0;t<T;t++)
{

	long long N,count=0;
	scanf("%lld",&N);
	while(N>0)
	{
		if(N%10==4)
			count++;
		N/=10;
	}
	printf("%lld\n",count);
}
}
