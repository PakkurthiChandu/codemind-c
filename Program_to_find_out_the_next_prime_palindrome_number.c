#include<stdio.h>
int rev(int a)
{
	int b,r=0;
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		r=r*10+b;
	}
	return r;
}
int pr(int a)
{
	int c=0,i;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c+=1;
		}
	}
	return c;
}
int main()
{
	int a,t=0;
	scanf("%d",&a);
	while(2)
	{
		a+=1;
		if(a==rev(a))
		{
		   if(pr(a)==2)
		   {
		   	printf("%d",a);
		   	break;
		  }	
		}
	}
}