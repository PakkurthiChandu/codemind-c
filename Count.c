#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],i,c=0,d=0;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		if(b[i]%2==0)
		{
			c+=1;
		}
		if(b[i]%2!=0)
		{
			d+=1;
		}
	}
	printf("%d %d",c,d);
}