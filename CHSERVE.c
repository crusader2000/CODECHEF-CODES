#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int a=0;a<t;a++)
	{
		int a,b,k;
		scanf("%d %d %d",&a,&b,&k);
		int n=(a+b)/k;
		if(n%2==0)
		{
			printf("CHEF\n");
		}	else
		{		printf("COOK\n");
		}

	}
}
