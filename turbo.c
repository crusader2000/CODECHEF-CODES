#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	int arr[T];
	for(int i=0;i<T;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<T;i++)
		for(int j=1;j<T-i;j++)
		{
			if(arr[j]<arr[j-1])
			{	int temp;
			temp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=temp;
			}
		}
	for(int i=0;i<T;i++)
		printf("%d\n",arr[i]);
}


