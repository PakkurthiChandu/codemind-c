#include<stdio.h>
int pr(int a)
{
	int i;
	if(a==1)
	{
		return 0;
	}
	for(i=2;i*i<=a;i++)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a,c=0,d=0,b;
	scanf("%d",&a);
	if(pr(a))
	{
		while(a!=0)
		{
			b=a%10;
			a=a/10;
			d+=1;
			if(pr(b))
			{
				c+=1;
			}
		}
		if(c==d)
		{
			printf("Mega Prime");
		}
		else
		{
			printf("Not Mega Prime");
		}
	}
	else
	{
		printf("Not Mega Prime");
	}
}