#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		unsigned long long int n,arr[50004]={0};
		scanf("%llu",&n);
		int temp1,temp2;
		printf("1 1 2 3\n");
		fflush(stdout);
		scanf("%llu",&arr[1]);
		
		printf("1 2 3 4\n");
		fflush(stdout);
		scanf("%llu",&arr[4]);
		for(int i=2;i<=n;i++)
		{
			if(i!=4)
			{
				printf("1 1 4 %d\n",i);
				fflush(stdout);
				scanf("%llu",&arr[i]);
				arr[i]=arr[i]^arr[1]^arr[4];
			}
		}
		
		arr[1]=arr[1]^arr[2]^arr[3];
		arr[4]=arr[4]^arr[2]^arr[3];

		printf("2 ");
		for(int i=1;i<=n;i++)
			printf("%llu ",arr[i]);
		fflush(stdout);

		int nothing;
		scanf("%d",&nothing);
	}
}
