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
		int xor=0;
	
		printf("1 2 3 4\n");
		fflush(stdout);
		unsigned long long int arr2;
		scanf("%llu",&arr2);
		xor=xor^arr2;
		
		printf("1 5 3 4\n");
		fflush(stdout);
		scanf("%llu",&arr2);
		xor=xor^arr2;
		
		printf("1 2 5 1\n");
		fflush(stdout);
		scanf("%llu",&arr2);
		xor=xor^arr2;

		arr[1]=xor;
		printf("2 ");
		for(int i=1;i<=n;i++)
			printf("%llu ",arr[1]+i-1);
		printf("\n");
		fflush(stdout);
		int nothing;
		scanf("%d",&nothing);
	}
}
