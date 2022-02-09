#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],i,j,c=0,d=0;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(b[i]==b[j])
			{
				c+=1;
			}
		}
		if(c==1)
		{
			printf("%d ",b[i]);
			d+=1;
		}
		c=0;
	}
	if(d==0)
	{
		printf("-1");
	}
}