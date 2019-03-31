#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
for(int a=0;a<t;a++)
{
	int N;
	scanf("%d",&N);
	int sum=N%10;
	while(N>=100)
	{N/=10;
	
	}
	sum+=N/10;
	printf("%d\n",sum);
}
}
