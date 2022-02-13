#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],i,c[a],t,j;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		c[i]=b[i]*b[i];
	}
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(c[i]>c[j])
			{
				t=c[i];
				c[i]=c[j];
				c[j]=t;
				
			}
		}
	//	printf("%d",b[i]);
}
for(i=0;i<a;i++)
{
	printf("%d ",c[i]);
}
}