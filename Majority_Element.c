#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],i,c=0,d=0,max=0,j;
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
		if(c>d)
		{
			max=b[i];
		}
		d=c;
		c=0;
	}
	printf("%d",max);
}