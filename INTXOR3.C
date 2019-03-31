/*
1 2 3
2 3 4
1 4 5
1 4 6
5 6 7
5 6 8
7 8 9
7 8 10
9 10 2
9 10 3

1 2 3
2 3 4
1 4 5
1 4 6
5 6 7
5 6 8
7 8 9
7 9 1
8 9 2
*/
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
		
		printf("1 1 2 3\n");
		fflush(stdout);
		unsigned long long int arr2;
		scanf("%llu",&arr2);
		arr[1]=arr2;

		printf("1 2 3 4\n");
		fflush(stdout);
		scanf("%llu",&arr2);
		arr[2]=arr2;
		unsigned long long int temp=arr[1]^arr[2],i=0;
		if(n%2==0)
		{
			while((i+7)!=n)
			{
				if(count!=2)
				{
					count++;
					printf("1 %d %d %d\n",(i+1),(i+4),(i+4+count));
					fflush(stdout);
					scanf("%llu",&arr2);
					arr[(i+count+4)]=arr2^temp;
				}
				else
				{
					count=0;
					temp=arr[(i+5)]^arr[(i+6)];
					i++;
				}
			}
			printf("1 %d %d %d\n",(n-1),(n-2),n);
			fflush(stdout);
			scanf("%llu",&arr2);
			temp=arr2^arr[n-1]^arr[n-2];//arr[2]

			printf("1 %d %d 1\n",(n-2),n);
			fflush(stdout);
			scanf("%llu",&arr2);
			unsigned long long int temp2;
	        temp2=arr2^arr[n]^arr[n-2];//arr[3]

	        arr[1]=arr[1]^temp^temp2;
	        arr[4]=arr[2]^temp^temp2;
	        arr[2]=temp;
	        arr[3]=temp2;
	    }
	    else
	    {
	    	while((i+7)!=n)
	    	{

	    		if(count==2)
	    		{
	    			count=0;
	    			temp=arr[(i+5)]^arr[(i+6)];
	    			i++;
	    		}
	    		else
	    		{
	    			count++;
	    			printf("1 %d %d %d\n",(i+1),(i+4),(i+4+count));
	    			fflush(stdout);
	    			scanf("%llu",&arr2);
	    			arr[(i+count+4)]=arr2^temp;
	    		}
	    	}
	    	printf("1 %d %d %d\n",(n-1),(n-2),n);
	    	fflush(stdout);
	    	scanf("%llu",&arr2);
	    	arr[n]=arr2^arr[n-1]^arr[n-2];

	    	printf("1 %d %d 1\n",n,(n-2));
	    	fflush(stdout);
	    	scanf("%llu",&arr2);
	    	unsigned long long int temp;
	    	temp2=arr2^arr[n-1]^arr[n-2];//arr[1]


	    	printf("1 %d %d 2\n",(n-1),n);
	    	fflush(stdout);
	    	scanf("%llu",&arr2);
	    	unsigned long long int temp2;
	        temp2=arr2^arr[n]^arr[n-1];//arr[2]

	        arr[3]=arr[1]^temp^temp2;
	        arr[4]=arr[2]^arr[3]^temp2;

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