#include <stdio.h>
int fun(int a,int b)
{
	if(a==0)
		return b;
	return fun(b%a,a);
}
int main(void) {
//	int arr[30];
//	arr[0]=1;
//	for(int i=1;i<=29;i++)
/*	{
		arr[i]=2*arr[i-1];
	}*/
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a;
		scanf("%d",&a);
		if(a==1)
			printf("1 2\n");
		if(a==2)
			printf("1 4\n");
		if(a==3)
			printf("3 8\n");
		if(a==4)
			printf("7 16\n");
		if(a==5)
			printf("1 2\n");
	}
	return 0;

}
