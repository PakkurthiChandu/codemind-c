#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],i,j,k;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(j=a-1;j>=a/2;j--)
	{
		printf("%d ",b[j]);
	}
	for(k=0;k<a/2;k++)
	{
		printf("%d ",b[k]);
	}
	return 0;
}