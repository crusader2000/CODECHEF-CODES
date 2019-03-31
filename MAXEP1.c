#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,c;
	scanf("%d %d",&n,&c);
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
