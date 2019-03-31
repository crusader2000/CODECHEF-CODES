#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		unsigned long long int n,arr[50004];
		scanf("%llu",&n);
		unsigned long long int temp=n,temp2=1;
		while(temp--)
		{
			printf("1 %llu %llu %llu\n",temp2,temp2,temp2);
			fflush(stdout);
			unsigned long long int arr2;
			scanf("%llu",&arr2);
			arr[temp2]=arr2;
			temp2++;
		}
		printf("2 ");
		for(int i=1;i<=n;i++)
			printf("%llu ",arr[i]);
		printf("\n");
		fflush(stdout);
		int nothing;
		scanf("%d",&nothing);
	}
}
