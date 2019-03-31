#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++)
	{
		long long int N,i=2,max=0;
			scanf("%lld",&N);
		for(int i=2;;i++)
		{
			int temp=N/i;
			if(max<=N-i*temp)
			{ max=N-i*temp;
			}
			else
			{ printf("%d",i);
			break;}

		}
	}
}
