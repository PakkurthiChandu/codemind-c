#include<stdio.h>
int pal(int a)
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
int main()
{
	int a,c;
	scanf("%d",&a);
	c=pal(a)*pal(a);
	if(pal(c)==a*a)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}