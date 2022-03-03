#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],i,j,max=0;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=i;j<a;j++)
		{
			if(b[i]<b[j])
			{
				if((b[j]-b[i])>max)
				{
					max=b[j]-b[i];
				}
			}
		}
	}
	printf("%d",max);
}