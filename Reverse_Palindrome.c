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
}
int main()
{
	int a,t=0;
	scanf("%d",&a);
	while(2)
	{
		t=a+rev(a);
		if(t==rev(t))
		{
			printf("%d",t);
			break;
		}
		else
		{
			a=t;
		}
		
	}
}