#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],i,t=0,c=1,j,k;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(b[i]==b[j])
			{
				c+=1;
				for(k=j;k<a;k++)
				{
					b[k]=b[k+1];
				}
				j--;
				a--;
			}
		}
		if(c!=0)
		{
			t+=c/2;
		}
		c=1;
	}
	printf("%d",t);
}