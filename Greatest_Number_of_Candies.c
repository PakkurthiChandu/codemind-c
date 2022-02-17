#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],i,max=0,e;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	scanf("%d",&e);
	for(i=0;i<a;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	for(i=0;i<a;i++)
	{
		//printf("%d",i);
		if((b[i]+e)>=max)
		{
			printf("True ");
		}
		else
		{
		printf("False ");
		}
	}
}