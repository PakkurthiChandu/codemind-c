#include<stdio.h>
int main()
{
	int a,c=0;
	scanf("%d",&a);
	int b[a],i,max=0,j;
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
			if(b[i]>max)
			{                         
				max=b[i];
			}
		}
		c=0;
	}
	if(max!=0)
	{
	printf("%d",max);
    }
	else
	{
	printf("-1");	
	}
}