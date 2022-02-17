#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],i,c=0;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		if(i%2==0)
		{
			if(b[i]%2!=0)
			{
				c+=1;
			}
		}
	}
	if(c==0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}