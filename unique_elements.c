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
	for(i=0;i<a;i++)
	{ 
		for(j=i+1;j<a;j++)
		{
			if(b[i]==b[j])
			{
				for(k=j;k<a;k++)
				{
		
					b[k]=b[k+1];
					
				}
				a--;
				j--;
			}
		
	
		}
	}
	for(i=0;i<a;i++)
	{
		printf("%d ",b[i]);
	}
}