#include<stdio.h>
int main()
{
int a;
float b;
scanf("%d",&a);
scanf("%f",&b);
if(a%5==0 &&  (float)a < b-0.5)
printf("%0.2f",b-(float)a-0.5);
else
printf("%0.2f",b);
return 0;
}
