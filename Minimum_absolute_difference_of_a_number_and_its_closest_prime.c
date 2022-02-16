#include<stdio.h>
int pr(int a)
{
	int c=0,i;
	if(a==1)
	{
		return 0;
	}
	for(i=2;i<a;i++)
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
	int a,i,j;
	scanf("%d",&a);
	for(i=a;i>0;i--)
	{
		if(pr(i))
		{
			break;
		}
	}
	for(j=a;;j++)
	{
		if(pr(j))
		{
			break;
		}
	}
	if((a-i)<(j-a))
{
	printf("%d",a-i);
}
else
{
	printf("%d",j-a);
}
}