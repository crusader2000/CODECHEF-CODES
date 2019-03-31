#include<stdio.h>
#include<stdlib.h>
unsigned long long int n,arr[50004];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu",&n);
		int count=0;
			if(n%2==0)
		{
		printf("1 1 2 3\n");
		fflush(stdout);
		unsigned long long int arr2;
		scanf("%llu",&arr2);
		arr[1]=arr2;

		printf("1 2 3 4\n");
		fflush(stdout);
		scanf("%llu",&arr2);
		arr[2]=arr2;

		printf("1 1 4 5\n");
		fflush(stdout);
		scanf("%llu",&arr2);
		arr[5]=arr2^arr[1]^arr[2];

		printf("1 1 4 6\n");
		fflush(stdout);
		scanf("%llu",&arr2);
		arr[6]=arr2^arr[1]^arr[2];
		
		unsigned long long int temp=arr[5]^arr[6],i=4;
	
			while((i+2)!=n)
			{
				if(count!=2)
				{
					count++;
					printf("1 %lld %lld %lld\n",(i+1),(i+2),(i+2+count));
					fflush(stdout);
					scanf("%llu",&arr2);
					arr[(i+count+2)]=arr2^temp;
				}
				else
				{
					count=0;
					temp=arr[(i+3)]^arr[(i+4)];
					i+=2;
				}
			}
			printf("1 %lld %lld 2\n",(n-1),n);
			fflush(stdout);
			scanf("%llu",&arr2);
			temp=arr2^arr[n-1]^arr[n];//arr[2]

			printf("1 %lld %lld 3\n",(n-1),n);
			fflush(stdout);
			scanf("%llu",&arr2);
			unsigned long long int temp2;
	        temp2=arr2^arr[n]^arr[n-1];//arr[3]

	        arr[1]=arr[1]^temp^temp2;
	        arr[4]=arr[2]^temp^temp2;
	        arr[2]=temp;
	        arr[3]=temp2;
	    }
	    else
	    {/*
	    	1 2 3
	    	1 2 4
	    	3 4 5
	    	3 4 6
	    	5 6 7
	    	5 6 8
	    	7 8 9
	    	7 9 1
	    	8 9 2
	    	*/

		printf("1 1 2 3\n");
		fflush(stdout);
		unsigned long long int arr2;
		scanf("%llu",&arr2);
		arr[1]=arr2;

		printf("1 1 2 4\n");
		fflush(stdout);
		scanf("%llu",&arr2);
		arr[2]=arr2;

		printf("1 3 4 5\n");
		fflush(stdout);
		scanf("%llu",&arr2);
		arr[5]=arr2^arr[1]^arr[2];

		printf("1 3 4 6\n");
		fflush(stdout);
		scanf("%llu",&arr2);
		arr[6]=arr2^arr[1]^arr[2];
	  
		unsigned long long int temp=arr[5]^arr[6],i=4;

	    	while((i+3)!=n)
	    	{
	    		if(count!=2)
	    		{
	    			count++;
	    			printf("1 %lld %lld %lld\n",(i+1),(i+2),(i+2+count));
	    			fflush(stdout);
	    			scanf("%llu",&arr2);
	    			arr[(i+count+2)]=arr2^temp;
	    		}
	    		else
	    		{
	    			count=0;
	    			temp=arr[(i+3)]^arr[(i+4)];
	    			i+=2;
	    		}
	    	}
	    	printf("1 %lld %lld %lld\n",(n-2),(n-1),n);
	    	fflush(stdout);
	    	scanf("%llu",&arr2);
	    	arr[n]=arr2^arr[n-1]^arr[n-2];

	    	printf("1 %lld %lld 1\n",n-2,n);
	    	fflush(stdout);
	    	scanf("%llu",&arr2);
	    	temp=arr2^arr[n]^arr[n-2];//arr[1]

	    	printf("1 %lld %lld 2\n",(n-1),n);
	    	fflush(stdout);
	    	scanf("%llu",&arr2);
	    	unsigned long long int temp2;
	        temp2=arr2^arr[n]^arr[n-1];//arr[2]

	        arr[3]=arr[1]^temp^temp2;
	        arr[4]=arr[2]^temp^temp2;

	        arr[1]=temp;
	        arr[2]=temp2;	
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