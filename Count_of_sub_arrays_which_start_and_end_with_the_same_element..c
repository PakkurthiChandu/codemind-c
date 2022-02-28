#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],i,c=0,j;
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
			}
		}
	}
	printf("%d",a+c);
}