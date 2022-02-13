#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],c[a],i;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=0;i<a;i++)
	{
		printf("%d ",b[i]+c[i]);
	}
}