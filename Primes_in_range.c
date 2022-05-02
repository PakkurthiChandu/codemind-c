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
	int a,b,i,c=0;
	scanf("%d%d",&a,&b);//printf("%d",pr(5));
	for(i=a;i<=b;i++)
	{
		if(pr(i))
		{
			c+=1;
		}
	}
	printf("%d",c);
}