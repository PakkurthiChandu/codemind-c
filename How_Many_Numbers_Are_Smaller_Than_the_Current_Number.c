#include<stdio.h>
int main()
{
	int a,small=0;
	scanf("%d",&a);
	int b[a],i,j;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(b[i]>b[j])
			{
				small+=1;
			}
		}
		printf("%d ",small);
		small=0;
	}
	
}