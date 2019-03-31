#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		long long int a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a>b)
		{
			if(b>c)
				printf("%lld\n",b);
			else
				printf("%lld\n",c);
		}
		else
		{
			if(a>c)
				printf("%lld\n",a);
			else
				printf("%lld\n",c);
		}
	}
}
